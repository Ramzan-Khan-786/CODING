#include<iostream>
using namespace std;
 bool isPalindrome(int x) {
        int reverse = 0, rem, temp;
        temp = x;
        while (temp != 0) {
            rem = temp % 10;
            reverse = reverse * 10 + rem;
            temp = temp / 10;
        }
        cout<<reverse;
        if (reverse == x) {
            return true;
        } else {
            return false;
        }
    }

int main(){
    int num=-121;
    if(isPalindrome(num)==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
return 0;
}