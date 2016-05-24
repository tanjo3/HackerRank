#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;

        int c = 1, num_fives, num_threes = 1;
        while (num_threes >= 0) {
            num_fives = 5 * c - 3 * N;
            num_threes = 2 * N - 3 * c;
            c++;
        }

        c -= 2;
        num_fives = 5 * c - 3 * N;
        num_threes = 2 * N - 3 * c;

        if (num_fives < 0 || num_threes < 0) {
            cout << -1 << endl;
        } else {
            for (int j = 0; j < num_fives; j++) {
                cout << 555;
            }
            for (int j = 0; j < num_threes; j++) {
                cout << 33333;
            }
            cout << endl;
        }
    }
}
