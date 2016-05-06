#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int N, X, Q, Y;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;
        v.push_back(X);
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> Y;

        auto low = lower_bound(v.begin(), v.end(), Y);
        if (*low == Y) {
            cout << "Yes ";
        } else {
            cout << "No ";
        }

        cout << low - v.begin() + 1<< endl;
    }

    return 0;
}
