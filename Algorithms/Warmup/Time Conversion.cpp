#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int hour, minute, second;
    char time[2];
    scanf("%2d:%2d:%2d%2s", &hour, &minute, &second, time);

    if (time[0] == 'P' && hour != 12 || time[0] == 'A' && hour == 12) {
        hour += 12;
    }
    if (hour == 24) {
        hour = 0;
    }

    printf("%02d:%02d:%02d", hour, minute, second);
    cout << endl;
}
