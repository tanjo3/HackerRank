#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, A, B;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A >> B;

        int count = 0;
        int rt = (int) ceil(sqrt(A));
        int sq = rt * rt;
        while (sq <= B) {
            count++;

            rt++;
            sq = rt * rt;
        }

        cout << count << endl;
    }

    return 0;
}
