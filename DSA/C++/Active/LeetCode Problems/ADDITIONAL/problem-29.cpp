// Url: https://leetcode.com/problems/divide-two-integers/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
    
         if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        bool negative = (dividend < 0) != (divisor < 0);

        long long absDividend = std::abs(static_cast<long long>(dividend));
        long long absDivisor = std::abs(static_cast<long long>(divisor));

        long long quotient = 0;

        while (absDividend >= absDivisor) {
            long long temp = absDivisor, multiple = 1;
            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            absDividend -= temp;
            quotient += multiple;
        }

        quotient = negative ? -quotient : quotient;

        if (quotient > INT_MAX) {
            return INT_MAX;
        }
        if (quotient < INT_MIN) {
            return INT_MIN;
        }

        return static_cast<int>(quotient);
    }
};

int main(){
Solution first;
cout <<first.divide(56,89);
return 0;
}