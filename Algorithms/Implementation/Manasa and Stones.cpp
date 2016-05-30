#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, n, a, b;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> n >> a >> b;
        vector<int> v;

        int x = 0, y = n - 1;
        while (x < n) {
            v.push_back(a * x + b * y);

            x++;
            y--;
        }

        sort(v.begin(), v.end(), operator>);
        v.erase(unique(v.begin(), v.end()), v.end());

        for (int ans : v) {
            cout << ans << ' ';
        }
        cout << endl;
    }

    return 0;
}
