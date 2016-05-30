#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;

    int encrypted;
    for (char c : s) {
        if ('a' <= c && c <= 'z') {
            encrypted = c + k % 26;
            if (encrypted > 'z') {
                encrypted -= 26;
            }
        } else if ('A' <= c && c <= 'Z') {
            encrypted = c + k % 26;
            if (encrypted > 'Z') {
                encrypted -= 26;
            }
        } else {
            encrypted = c;
        }

        cout << (char) encrypted;
    }
    cout << endl;

    return 0;
}
