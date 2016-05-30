#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k, t;
    cin >> n >> k;

    int specialCount = 0, pageIndex = 1, startProblem, endProblem;
    for (int i = 0; i < n; i++) {
        cin >> t;

        int numPages = ceil((float) t / k);

        for (int i = 0; i < numPages; i++) {
            startProblem = 1 + k * i;
            endProblem = ((t < k * (i + 1)) ? t : k * (i + 1));

            if (startProblem <= pageIndex && pageIndex <= endProblem) {
                specialCount++;
            }

            pageIndex++;
        }
    }

    cout << specialCount << endl;

    return 0;
}
