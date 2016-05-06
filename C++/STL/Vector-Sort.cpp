#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int N, V;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> V;
        v.push_back(V);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N - 1; i++) {
        cout << v[i] << ' ';
    }
    cout << v.back();

    return 0;
}
