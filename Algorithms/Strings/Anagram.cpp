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

    string line;
    getline(cin, line);

    for (int t = 0; t < T; t++) {
        getline(cin, line);

        int letters[26] = {0};
        if (line.length() % 2 == 0) {
            auto it = line.begin();
            for (int i = 0; i < line.length() / 2; i++, it++) {
                letters[*it - 'a']++;
            }

            int count = 0;
            for (int i = line.length() / 2; i < line.length(); i++, it++) {
                if (letters[*it - 'a'] > 0) {
                    letters[*it - 'a']--;
                } else {
                    count++;
                }
            }

            cout << count << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
