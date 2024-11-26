//https://www.naukri.com/code360/problems/nth-fibonacci-number_74156
#include<bits/stdc++.h>
using namespace std;

int fabn(int n){
        if(n==1 || n==2){
                return 1;
        }
        if(n>10000){
                return 0;
        }
        return fabn(n-1)+fabn(n-2);

}

int main()
{
     int n,ans;
     cin>>n;
     
     ans=fabn(n);
     cout<<ans;
}