// Problem Link: https://leetcode.com/problems/add-digits/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int n) {
        int sum = n;
        while (sum >= 10) {
            int tempsum = 0;
            int ncopy = sum;
            while (ncopy != 0) {
                tempsum = tempsum + ncopy % 10;
                ncopy = ncopy / 10;
            }
            sum = tempsum;
        }

        return sum;
    }
};
int main()
{
    int n = 258;

    Solution first;
    cout << first.addDigits(n);
  

    return 0;
}