#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    string str;
    getline(cin, str);
    for (int n = 0; n < N; n++) {
        getline(cin, str);

        if (next_permutation(str.begin(), str.end())) {
            cout << str << endl;
        } else {
            cout << "no answer" << endl;
        }
    }

    return 0;
}
