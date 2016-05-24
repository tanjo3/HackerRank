#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findLargestVehicle(const int highway[], int start, int end) {
    bool two = false, three = false;
    for (int i = start; i <= end; i++) {
        if (highway[i] == 1) {
            return 1;
        }

        if (!two && highway[i] == 2) {
            two = true;
        } else {
            if (!three && highway[i] == 3) {
                three = true;
            }
        }
    }

    if (!three || two) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, T, i, j;
    cin >> N >> T;

    int width[N];
    for (int n = 0; n < N; n++) {
        cin >> width[n];
    }

    for (int n = 0; n < T; n++) {
        cin >> i >> j;

        cout << findLargestVehicle(width, i, j) << endl;
    }

    return 0;
}
