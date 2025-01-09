#include<iostream>
using namespace std;
        
        // PATTERN 1
        // 4 3 2 1
        // 4 3 2 1
        // 4 3 2 1
        // 4 3 2 1

int main(){
    int n=4;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << " "<<n+1-j;
            j = j + 1;
        }
        cout<<endl;
        i  =  i  + 1;
    }


return 0;
}