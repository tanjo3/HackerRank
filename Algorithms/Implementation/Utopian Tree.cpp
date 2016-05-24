#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N, H;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        H = 1;

        for (int j = 0; j < N; j++) {
            if (j % 2 == 0) {
                H *= 2;
            } else {
                H++;
            }
        }

        cout << H << endl;
    }
}
