#include<iostream>
#include<math.h>
using namespace std;

// BINARY TO DECIMAL

int main(){
    int n=1011;

    int ans=0;
    int i=0;

    while(n!=0){
        int digit = n%10;
        if(digit==1){
        ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans;
return 0;
}