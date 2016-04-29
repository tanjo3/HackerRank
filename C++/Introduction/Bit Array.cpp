#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, S, P, Q;
    cin >> N;
    cin >> S;
    cin >> P;
    cin >> Q;

    std::vector<bool> check(1L << 31, 0);
    unsigned long long prevNum;
    int numDistinct = 1;

    prevNum = S;
    check[S] = 1;

    for (int i = 1; i < N; i++) {
        unsigned long long nextVal = prevNum * P + Q;
        prevNum = nextVal % (1U << 31);

        if (check[prevNum] == 0) {
            check[prevNum] = 1;
            numDistinct++;
        }
    }

    cout << numDistinct << endl;

    return 0;
}
