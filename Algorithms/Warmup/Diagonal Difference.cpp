#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, left_right = 0, right_left = 0, diff;
    cin >> N;

    int row[N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> row[j];
        }

        left_right += row[i];
        right_left += row[N - i - 1];
    }

    diff = left_right - right_left;
    cout << ((diff > 0) ? diff : -diff) << endl;

    return 0;
}
