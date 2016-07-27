#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N, M, S, id;
    cin >> T;

    for (int t = 0; t < T; t++) {
        cin >> N >> M >> S;
        cout << (--M + --S) % N + 1 << endl;
    }

    return 0;
}
