#include <iostream>
#include <deque>
using namespace std;

int maxOf(deque<int>::iterator begin, deque<int>::iterator end) {
    int max = 0;
    while (begin != end) {
        if (*begin > max) {
            max = *begin;
        }
        begin++;
    }

    return max;
}

void printKMax(int arr[], int N, int K) {
    //Write your code here.
    deque<int> mydeque;
    int max = 0;

    for (int i = 0; i < K; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        mydeque.push_back(arr[i]);
    }
    cout << max;


    for (int i = 1; i < N - K + 1; i++) {
        if (mydeque.front() == max) {
            max = maxOf(mydeque.begin() + 1, mydeque.end());
        }
        mydeque.pop_front();

        if (arr[i + K - 1] > max) {
            max = arr[i + K - 1];
        }
        mydeque.push_back(arr[i + K - 1]);

        cout << ' ' << max;
    }

    cout << endl;
}

int main(){
    int t;
    cin >> t;

    while(t > 0) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
