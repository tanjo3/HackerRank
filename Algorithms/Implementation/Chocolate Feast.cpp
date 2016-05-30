#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        int n;
        int c;
        int m;
        cin >> n >> c >> m;

        int chocolates = n / c;
        int wrappers = chocolates;
        int newChocolates;

        while (wrappers >= m) {
            newChocolates = wrappers / m;

            wrappers %= m;
            wrappers += newChocolates;
            chocolates += newChocolates;
        }

        cout << chocolates << endl;
    }
    return 0;
}
