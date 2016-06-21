#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string line;
    getline(cin, line);

    int count[26] = {0};
    for (auto it = line.begin(); it != line.end(); it++) {
        count[*it - 'a']++;
    }

    bool found = true, odd = false;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 == 1) {
            if (!odd) {
                odd = true;
            } else {
                found = false;
                break;
            }
        }
    }

    cout << (found ? "YES" : "NO") << endl;
}
