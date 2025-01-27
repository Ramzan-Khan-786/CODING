// link : https://leetcode.com/problems/climbing-stairs/
#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int a = 0;
        int b = 1;
        int c = 0;
        for (int i = 0; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};

int main() {
    Solution solution;

    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    int ways = solution.climbStairs(n);

    cout << "Number of ways to climb " << n << " steps: " << ways << endl;

    return 0;
}
