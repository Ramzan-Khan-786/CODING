//https://leetcode.com/problems/powx-n/solutions/?envType=problem-list-v2&envId=recursion
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }

        if (n == INT_MIN) {
            if (x == -1) return 1;
            x = 1 / x;
            n = INT_MAX;
        }

        if (n < 0) {
            if (x == 0) return 0;
            x = 1 / x;
            n = -n;
        }

        double half = myPow(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
};


int main() {
    cout <<endl << "Hello World" << endl;
    Solution mySolution;
    double x = 2.0;
    int n = -3;
    cout << mySolution.myPow(x, n) << endl;

    return 0;
}