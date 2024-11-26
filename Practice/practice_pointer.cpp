#include <bits/stdc++.h>
using namespace std;

int print(int n){

    if(n==0){
        return 1;
    }
    print(n-1);
    cout<<n<<" ";
    print(n-1);
    
}

int main() {
    cout << "Hello World" << endl;
    int n;
    cin>> n;
    print(n);
    return 0;
}