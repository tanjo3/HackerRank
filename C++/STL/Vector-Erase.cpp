#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int N, x, a, b;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }

    cin >> x;
    v.erase(v.begin() + x - 1);

    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    cout << v.size() << endl;

    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ' ';
    }
    cout << v.back();

    return 0;
}
