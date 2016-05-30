#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        int R, C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++) {
            cin >> G[G_i];
        }

        int r, c;
        cin >> r >> c;
        vector<string> P(r);
        for (int P_i = 0; P_i < r; P_i++) {
            cin >> P[P_i];
        }

        bool match = false;
        for (int i = 0; !match && i <= R - r; i++) {
            string line = G[i];

            int index = 0;
            size_t found;
            while (!match && (found = line.find(P[0])) != string::npos) {
                match = true;

                for (int j = 1; match && j < r; j++) {
                    if (G[i + j].compare(index + found, c, P[j]) != 0) {
                        match = false;
                    }
                }

                if (index + found + 1 < C) {
                    line = line.substr(found + 1);
                    index += found + 1;
                } else {
                    line = "";
                }
            }
        }

        cout << (match ? "YES" : "NO") << endl;
    }
    return 0;
}
