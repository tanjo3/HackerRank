#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, a;
    float pos_count = 0.0, neg_count = 0.0, zero_count = 0.0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a;
        if (a == 0) {
            zero_count++;
        } else if (a > 0) {
            pos_count++;
        } else {
            neg_count++;
        }
    }

    cout << pos_count / N << endl;
    cout << neg_count / N << endl;
    cout << zero_count / N << endl;

    return 0;
}
