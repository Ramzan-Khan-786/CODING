#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int reverse = 0, rem, temp;
        temp = x;
        while (temp != 0) {
            rem = temp % 10;
            if (reverse > (INT_MAX - rem) / 10) {
                return false;
            }
            reverse = reverse * 10 + rem;
            temp = temp / 10;
        }

        return reverse == x; 
    }
};

int main(){
Solution first;
cout<<first.isPalindrome(7786877);
return 0;
}