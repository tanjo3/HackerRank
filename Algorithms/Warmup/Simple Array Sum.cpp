#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, temp, sum = 0;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> temp;
        sum += temp;
    }

    cout << sum << endl;

    return 0;
}
