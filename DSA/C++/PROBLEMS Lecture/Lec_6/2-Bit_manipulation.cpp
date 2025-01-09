#include<iostream>
#include<math.h>
using namespace std;

// DECIMAL TO BINARY

int main(){
    int n=99888;
    
    long long ans=0;
    int i=0;

    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i)+ans);
        n=n>>1;
        i++;
    }
    cout<<ans;
return 0;
}