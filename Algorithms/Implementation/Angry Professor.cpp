#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N, K, time;
    cin >> T;

    int num_ontime;
    for (int i = 0; i < T; i++) {
        num_ontime = 0;

        cin >> N >> K;
        for (int j = 0; j < N; j++) {
            cin >> time;
            if (time <= 0) {
                num_ontime++;
            }
        }

        if (num_ontime < K) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
