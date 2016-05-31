#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p, q;
    cin >> p >> q;

    long long sq;
    char temp[13];
    vector<long long> kaprekars;
    for (long long i = p; i <= q; i++) {
        sq = i * i;

        snprintf(temp, 13, "%lld", sq);
        string strNum(temp);

        int l, r;
        l = atoi(strNum.substr(0, strNum.length() / 2).c_str());
        r = atoi(strNum.substr(strNum.length() / 2).c_str());

        if (l + r == i) {
            kaprekars.push_back(i);
        }
    }

    if (kaprekars.empty()) {
        cout << "INVALID RANGE" << endl;
    } else {
        for (auto it = kaprekars.begin(); it != kaprekars.end() - 1; it++) {
            cout << *it << ' ';
        }
        cout << kaprekars.back() << endl;
    }

    return 0;
}
