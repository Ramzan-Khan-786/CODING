#include<iostream>
#include <limits>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
    if (x == 0) {
            return (n > 0) ? 0 : std::numeric_limits<double>::infinity();
        }
        
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double ans = 1;
        while (N > 0) {
            if (N % 2 == 1) {
                ans *= x;
            }
            x *= x;
            N /= 2;
        }

        return ans;
}
};

int main(){
Solution first;
cout<<first.myPow(3,9);
return 0;
}