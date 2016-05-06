#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> mymap;
    int Q, type, Y;
    string X;

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> type;

        switch (type) {
            case 1:
                cin >> X >> Y;
                mymap[X] += Y;
                break;
            case 2:
                cin >> X;
                mymap.erase(X);
                break;
            case 3:
                cin >> X;
                auto it = mymap.find(X);
                cout << ((it == mymap.end()) ? 0 : it->second) << endl;
        }
    }

    return 0;
}
