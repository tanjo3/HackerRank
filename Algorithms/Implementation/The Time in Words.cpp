#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char* numbers[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                              "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
                              "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};

    int h, m;
    cin >> h >> m;

    switch (m) {
        case 0:
            printf("%s o' clock\n", numbers[h]);
            break;
        case 1:
            printf("one minute past %s\n", numbers[h]);
            break;
        case 15:
            printf("quarter past %s\n", numbers[h]);
            break;
        case 30:
            printf("half past %s\n", numbers[h]);
            break;
        case 45:
            printf("quarter to %s\n", numbers[h % 12 + 1]);
            break;
        case 59:
            printf("one minute to %s\n", numbers[h % 12 + 1]);
            break;
        default:
            (m < 30) ? printf("%s minutes past %s\n", numbers[m], numbers[h]) : printf("%s minutes to %s\n", numbers[60 - m], numbers[h % 12 + 1]);
    }

    return 0;
}
