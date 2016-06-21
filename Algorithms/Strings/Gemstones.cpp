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
	
    int gems[26] = {0};
    for (int n = 0; n < N; n++) {
        getline(cin, line);

        for (char c : line) {
            if (gems[c - 'a'] == n) {
                gems[c - 'a']++;
            }
        }
    }

    int count = 0;
    for (int c : gems) {
        if (c == N) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
