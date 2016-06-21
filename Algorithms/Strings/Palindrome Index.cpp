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

        int result = -1;

        for (int min = 0, max = line.length - 1; min < max; min++, max--) {
            if (line[min] != line[max]) {
                if (line[min + 1] == line[max] && line[max - 1] == line[min + 2]) {
                    result = min;
                } else {
                    result = max;
                }

                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
