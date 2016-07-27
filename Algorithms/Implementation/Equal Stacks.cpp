#include <cmath>
#include <cstdio>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxOfStacks(int a, int b, int c) {
    if (a == b && b == c) {
        return 0;
    }

    if (a < b) {
        if (b < c) return 3;
        else return 2;
    } else {
        if (a < c) return 3;
        else return 1;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1, n2, n3, temp;
    cin >> n1 >> n2 >> n3;

    int height1 = 0, height2 = 0, height3 = 0;
    queue<int> stack1 ,stack2, stack3;
    for (int i = 0; i < n1; i++) {
        cin >> temp;
        stack1.push(temp);
        height1 += temp;
    }
    for (int i = 0; i < n2; i++) {
        cin >> temp;
        stack2.push(temp);
        height2 += temp;
    }
    for (int i = 0; i < n3; i++) {
        cin >> temp;
        stack3.push(temp);
        height3 += temp;
    }

    int tallest = maxOfStacks(height1, height2, height3);
    while (tallest != 0) {
        switch (tallest) {
            case 1:
                height1 -= stack1.front();
                stack1.pop();
                break;
            case 2:
                height2 -= stack2.front();
                stack2.pop();
                break;
            case 3:
                height3 -= stack3.front();
                stack3.pop();
                break;
        }

        tallest = maxOfStacks(height1, height2, height3);
    }

    cout << height1 << endl;

    return 0;
}
