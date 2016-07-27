#include <cmath>
#include <cstdio>
#include <map>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, temp;
    cin >> n;

    map<int, set<int>> map;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        map[temp].insert(i);
    }

    int min = n;
    for (auto it = map.begin(); it != map.end(); it++) {
        temp = *(it->second.begin()) - *(it->second.rbegin());
        temp = (temp < 0) ? -temp : temp;

        if (temp != 0 && temp < min) {
            min = temp;
        }
    }

    cout << (min == n ? -1 : min) << endl;

    return 0;
}
