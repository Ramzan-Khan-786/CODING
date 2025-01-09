// Url: https://leetcode.com/problems/power-of-two/
#include <bits/stdc++.h>
using namespace std;

bool isPow(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

int main() {
    int n = 16;
    if (isPow(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
