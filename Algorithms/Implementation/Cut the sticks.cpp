#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
        cin >> arr[arr_i];
    }

    sort(arr.begin(), arr.end());

    int start = 0, count = 0, dec;
    while (arr[n - 1] > 0) {
        dec = arr[start];
        count = 0;

        for (int i = start; i < n; i++) {
            arr[i] -= dec;
            count++;

            if (arr[i] <= 0) {
                start = i + 1;
            }
        }

        cout << count << endl;
    }

    return 0;
}
