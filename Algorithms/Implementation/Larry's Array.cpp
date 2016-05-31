#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findMin(int x, int y, int z) {
    if (x < y && x < z) {
        return x;
    } else if (y < x && y < z) {
        return y;
    } else {
        return z;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;

        int a[N];
        for (int j = 0; j < N; j++) {
            cin >> a[j];
        }

        int min, temp;
        for (int j = 0; j < N - 2; j++) {
            for (int k = 0; k < N - 2; k++) {
                min = findMin(a[k], a[k + 1], a[k + 2]);

                while (a[k] != min) {
                    temp = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = a[k + 2];
                    a[k + 2] = temp;
                }
            }
        }

        if (a[N - 3] < a[N - 2] && a[N - 2] < a[N - 1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
