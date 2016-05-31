#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int rows = (int) sqrt(s.length());
    int columns = rows;

    if (rows * columns < s.length()) {
        columns++;

        if (rows * columns < s.length()) {
            rows++;
        }
    }

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            if (i + j * columns < s.length()) {
                cout << s[i + j * columns];
            }
        }
        cout << ' ';
    }
    cout << endl;

    return 0;
}
