#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class BigInt {
public:
    BigInt(int n) {
        while (n != 0) {
            push_digit(n % 10);
            n /= 10;
        }
    }

    void push_digit(const short& d) {
        digits.push_back(d);
    }

    short get_digit(int ind) {
        return digits[ind];
    }

    bool outOfBoundsIndex(int ind) {
        return (ind >= digits.size());
    }

    BigInt operator*(int n) {
        vector<BigInt> partProducts;
        int copyN = n, count = 0;

        while (copyN != 0) {
            BigInt partProduct(0);

            for (int i = 0; i < count; i++) {
                partProduct.push_digit(0);
            }

            short carry = 0, tempVal;
            for (auto it = digits.begin(); it != digits.end(); it++) {
                tempVal = *it * (copyN % 10) + carry;

                partProduct.push_digit(tempVal % 10);
                carry = tempVal / 10;
            }

            if (carry != 0) {
                partProduct.push_digit(carry);
            }
            partProducts.push_back(partProduct);

            copyN /= 10;
            count++;
        }

        short tempSum, carry = 0;
        size_t index = 0;
        bool allDone = (count == 0);
        BigInt sum(0);
        while (!allDone) {
            tempSum = 0, allDone = true;

            for (BigInt bi : partProducts) {
                if (!bi.outOfBoundsIndex(index)) {
                    tempSum += bi.get_digit(index);
                }

                if (!bi.outOfBoundsIndex(index + 1)) {
                    allDone = false;
                }
            }

            tempSum += carry;

            sum.push_digit(tempSum % 10);
            carry = tempSum / 10;
            index++;
        }

        if (carry != 0) {
            sum.push_digit(carry);
        }

        return sum;
    }

    string to_string() {
        string str = "";

        for (short dig : digits) {
            str.insert(str.begin(), dig + '0');
        }

        return str;
    }
private:
    vector<short> digits;
};

BigInt factorial(int n) {
    if (n == 1) {
        return BigInt(1);
    } else {
        return factorial(n - 1) * n;
    }
}

int main() {
    int n;
    cin >> n;

    cout << factorial(n).to_string() << endl;
    return 0;
}
