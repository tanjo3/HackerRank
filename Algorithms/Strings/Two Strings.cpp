#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;

    string strA, strB;
    getline(cin, strA);

    for (int t = 0; t < T; t++) {
        getline(cin, strA);
        getline(cin, strB);

        sort(strA.begin(), strA.end());
        sort(strB.begin(), strB.end());

        auto itA = strA.begin();
        auto itB = strB.begin();
        bool substring = false;
        while (itA != strA.end() && itB != strB.end()) {
            if (*itA == *itB) {
                substring = true;
                break;
            } else if (*itA < *itB) {
                itA++;
            } else {
                itB++;
            }
        }

        cout << (substring ? "YES" : "NO") << endl;
    }

    return 0;
}
