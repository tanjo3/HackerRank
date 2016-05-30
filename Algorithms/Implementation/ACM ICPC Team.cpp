#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<string> topic(n);
    for (int topic_i = 0; topic_i < n; topic_i++){
        cin >> topic[topic_i];
    }

    int max = 0, count = 0, topicCount;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            topicCount = 0;
            for (int k = 0; k < m; k++) {
                if (topic[i][k] == '1' || topic[j][k] ==  '1') {
                    topicCount++;
                }
            }

            if (topicCount == max) {
                count++;
            } else if (topicCount > max) {
                max = topicCount;
                count = 1;
            }
        }
    }

    cout << max << endl << count << endl;

    return 0;
}
