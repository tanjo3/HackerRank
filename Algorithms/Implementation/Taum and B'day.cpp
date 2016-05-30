#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, B, W;
    long long X, Y, Z, blackCost, whiteCost;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> B >> W >> X >> Y >> Z;

        blackCost = ((X > Y + Z) ? Y + Z : X);
        whiteCost = ((Y > X + Z) ? X + Z : Y);

        cout << B * blackCost + W * whiteCost << endl;
    }

    return 0;
}
