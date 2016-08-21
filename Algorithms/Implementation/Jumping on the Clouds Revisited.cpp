#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int clouds[n];
    for (int i = 0; i < n; i++){
       cin >> clouds[i];
    }

    int cloud = 0, energy = 100;
    while (cloud != n) {
        cloud += k;
        energy--;

        if (clouds[cloud % n] == 1) {
            energy -= 2;
        }
    }

    cout << energy << endl;

    return 0;
}
