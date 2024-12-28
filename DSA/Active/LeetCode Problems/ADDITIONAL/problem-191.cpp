// Problem Link: https://leetcode.com/problems/number-of-1-bits/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n= 11;
    // bitset<32>ramzan(n);
    // cout<<ramzan;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
   cout<<count;
return 0;
}