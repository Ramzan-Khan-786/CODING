#include<bits/stdc++.h>
using namespace std;

int digits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int pow(int base, int index) {
    int result = 1;
    for (int i = 0; i < index; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int base, int index) {
    int num_copy = base, sum = 0;
    while (num_copy > 0) {
        int rem = num_copy % 10;
        sum += pow(rem, index);
        num_copy /= 10;
    }
    return sum == base;
}

int main() {
    cout << "Hello World" << endl;
    int num = 153;
    int exponent = digits(num);
    if (isArmstrong(num, exponent)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}
