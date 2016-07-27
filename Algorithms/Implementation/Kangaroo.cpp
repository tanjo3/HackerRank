#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    int r = x2 - x1;
    int s = v1 - v2;

    if (r > 0 && s > 0 && r % s == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
