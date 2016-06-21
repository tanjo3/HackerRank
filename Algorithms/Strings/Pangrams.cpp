#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string sentence;
    getline(cin, sentence);
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::toupper);

    char check;
    for (check = 'A'; check <= 'Z'; check++) {
        if (find(sentence.begin(), sentence.end(), check) == sentence.end()) {
            break;
        }
    }

    if (check > 'Z') {
        cout << "pangram" << endl;
    } else {
        cout << "not pangram" << endl;
    }

    return 0;
}
