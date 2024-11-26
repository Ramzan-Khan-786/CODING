#include <bits/stdc++.h>
using namespace std;

int fab(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fab(n-1)+fab(n-2);
}

int main() {
    cout <<endl << "Hello World" << endl;
    cout<<fab(8)<<endl;

    return 0;
}