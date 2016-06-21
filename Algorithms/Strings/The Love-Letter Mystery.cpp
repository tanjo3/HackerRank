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

    string letter;
    getline(cin, letter);
    for (int i = 0; i < T; i++) {
        getline(cin, letter);

        int numChanges = 0;
        for (auto min = letter.begin(), max = letter.end() - 1; min < max; min++, max--) {
            numChanges += abs(*min - *max);
        }

        cout << numChanges << endl;
    }

    return 0;
}
