#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int Q, x, y;

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> y >> x;

        switch (y) {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                cout << ((s.find(x) == s.end()) ? "No" : "Yes") << endl;
        }
    }

    return 0;
}
