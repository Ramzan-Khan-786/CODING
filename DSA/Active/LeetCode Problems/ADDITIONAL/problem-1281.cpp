#include<iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        while (n != 0) {
            int digit = n % 10;
            product = product * digit;
            sum = sum + digit;
            n = n / 10;
        }

        int ans = product - sum;
        return ans;
    }
};

int main(){

    int n=234;
    Solution first;
    cout<<first.subtractProductAndSum(n);

    // int sum=0;
    // int product=1;

    // while(n!=0){
    //     int digit = n%10;
    //     product=product*digit;
    //     sum = sum+digit;
    //     n=n/10;
    // }
    // cout<<sum<<endl;
    // cout<<product<<endl;

    // int ans=product-sum;
    // cout<<ans;


return 0;
}