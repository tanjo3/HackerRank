#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

void flipFrame(int** arr, int leftBound, int rightBound, int topBound, int bottomBound) {
    vector<int> stack;

    for (int i = leftBound; i <= rightBound; i++) {
        stack.push_back(arr[topBound][i]);
        stack.push_back(arr[bottomBound][i]);
    }

    for (int i = leftBound; i <= rightBound; i++) {
        arr[topBound][i] = stack.back();
        stack.pop_back();
        arr[bottomBound][i] = stack.back();
        stack.pop_back();
    }

    for (int i = topBound + 1; i < bottomBound; i++) {
        stack.push_back(arr[i][leftBound]);
        stack.push_back(arr[i][rightBound]);
    }

    for (int i = topBound + 1; i < bottomBound; i++) {
        arr[i][leftBound] = stack.back();
        stack.pop_back();
        arr[i][rightBound] = stack.back();
        stack.pop_back();
    }
}

void rotateFrame(int** arr, int leftBound, int rightBound, int topBound, int bottomBound, int numRotations) {
    int M = rightBound - leftBound + 1, N = bottomBound - topBound + 1;
    int perimeter = 2 * M + 2 * N - 4;
    int rotations = numRotations % perimeter;

    if (rotations >= perimeter / 2) {
        flipFrame(arr, leftBound, rightBound, topBound, bottomBound);
        rotations -= perimeter / 2;
    }

    int tempA, tempB;
    for (int i = 0; i < rotations; i++) {
        tempA = arr[topBound][leftBound];
        for (int j = leftBound; j < rightBound; j++) {
            arr[topBound][j] = arr[topBound][j + 1];
        }

        tempB = arr[bottomBound][leftBound];
        for (int j = bottomBound; j > topBound + 1; j--) {
            arr[j][leftBound] = arr[j - 1][leftBound];
        }
        arr[topBound + 1][leftBound] = tempA;

        tempA = arr[bottomBound][rightBound];
        for (int j = rightBound; j > leftBound + 1; j--) {
            arr[bottomBound][j] = arr[bottomBound][j - 1];
        }
        arr[bottomBound][leftBound + 1] = tempB;

        for (int j = topBound; j < bottomBound - 1; j++) {
            arr[j][rightBound] = arr[j + 1][rightBound];
        }
        arr[bottomBound - 1][rightBound] = tempA;
    }
}

void printArray(int** arr, int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N - 1; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << arr[i][N - 1] << endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int M, N, R;
    cin >> M >> N >> R;

    int** a = new int* [M];
    for (int i = 0; i < M; i++) {
        a[i] = new int[N];
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < MIN(M, N) / 2; i++) {
        rotateFrame(a, i, N - 1 - i, i, M - 1 - i, R);
    }

    printArray(a, M, N);

    for (int i = 0; i < M; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
