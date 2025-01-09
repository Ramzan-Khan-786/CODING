// https://www.naukri.com/code360/problems/sum-of-even-numbers-till-n_893205
#include<iostream>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

 
long long evenSumTillN(int n) {
   long long int sum=0;

    for(long long int i=0;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
int n=24;
cout<<evenSumTillN(n);
return 0;
}