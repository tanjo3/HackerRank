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
    N++;

    for (int i = 1; i < N; i++) {
        int j;
        for (j = 1; j < N - i; j++) {
            cout << ' ';
        }
        for (int k = 0; k < N - j; k++) {
            cout << '#';
        }
        cout << endl;
    }

    return 0;
}
