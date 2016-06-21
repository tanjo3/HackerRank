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

    string testString;
    getline(cin, testString);
    for (int i = 0; i < T; i++) {
        getline(cin, testString);

        int numDelete = 0;
        char current = 0;
        for (auto it = testString.begin(); it != testString.end(); it++) {
            if (*it == current) {
                numDelete++;
            } else {
                current = *it;
            }
        }

        cout << numDelete << endl;
    }

    return 0;
}
