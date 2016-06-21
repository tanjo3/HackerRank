#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    string line;
    getline(cin, line);

    for (int n = 0; n < N; n++) {
        getline(cin, line);

        bool funny = true;
        for (int i = 0; i < line.length() - 1; i++) {
            char a = line[i], b = line[i + 1];
            char c = line[line.length() - i - 1], d = line[line.length() - i - 2];

            if (a - b != c - d && a - b != -c + d) {
                funny = false;
                break;
            }
        }

        cout << (funny ? "Funny" : "Not Funny") << endl;
    }

    return 0;
}
