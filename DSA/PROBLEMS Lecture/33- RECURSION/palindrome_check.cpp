#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int start ,int end){
    if(start>=end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return isPalindrome(s,++start,--end);
}

int main() {
    cout <<endl << "Hello World" << endl;
    string s="malayalar";
    cout<<isPalindrome(s,0,(s.length()-1))<<endl;
    return 0;
}