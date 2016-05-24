#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N, count;
    string str_N;
    cin >> T;

    for (int i = 0; i < T; i++) {
        count = 0;

        cin >> N;
        str_N = to_string(N);

        for (int j = 0; j < str_N.length(); j++) {
            if (str_N[j] != '0') {
                if (N % (str_N[j] - '0') == 0) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
}
