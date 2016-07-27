#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k, a;
    cin >> n >> k;

    vector<int> seq;
    for (int nn = 0; nn < n; nn++) {
        cin >> a;
        seq.push_back(a);
    }

    int save, count = 0;
    for (auto it1 = seq.begin(); it1 != seq.end(); it1++) {
        save = *it1;

        for (auto it2 = it1 + 1; it2 != seq.end(); it2++) {
            if ((save + *it2) % k == 0) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
