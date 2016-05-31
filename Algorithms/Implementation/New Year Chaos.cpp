#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, n;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;

        int temp;
        map<int, int> stickers;
        map<int, int> indices;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            stickers[temp] = j;
            indices[j] = temp;
        }

        int index, diff = 0, count = 0;
        for (int x = n; diff < 3 && x > 1; x--) {
            index = stickers[x];

            diff = x - index - 1;
            if (diff < 3 && diff != 0) {
                stickers[x] += diff;
                indices[index] = indices[index + 1];
                stickers[indices[index]]--;

                if (diff == 1) {
                    indices[index + 1] = x;
                } else {
                    stickers[indices[index + 2]]--;
                    indices[index + 1] = indices[index + 2];
                    indices[index + 2] = x;
                }

                count += diff;
            }
        }

        if (diff > 2) {
            cout << "Too chaotic" << endl;
        } else {
            cout << count << endl;
        }
    }

    return 0;
}
