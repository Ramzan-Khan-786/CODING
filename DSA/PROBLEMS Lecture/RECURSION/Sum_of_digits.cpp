#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    

    return n%10 + sum (n/10);
}

int main() {
    cout <<endl<< "Hello World" << endl;
    int N=426;
    int ans=sum(N);
    cout<<endl<<ans<<endl;
    return 0;
}