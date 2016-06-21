#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string strA, strB;
    getline(cin, strA);
    getline(cin, strB);

    int countA[26] = {0};
    int countB[26] = {0};

    for (auto it = strA.begin(); it != strA.end(); it++) {
        countA[*it - 'a']++;
    }
    for (auto it = strB.begin(); it != strB.end(); it++) {
        countB[*it - 'a']++;
    }

    int numDeletes = 0;
    for (int i = 0; i < 26; i++) {
        if (countA[i] > countB[i]) {
            numDeletes += countA[i] - countB[i];
        } else {
            numDeletes += countB[i] - countA[i];
        }
    }

    cout << numDeletes << endl;
}
