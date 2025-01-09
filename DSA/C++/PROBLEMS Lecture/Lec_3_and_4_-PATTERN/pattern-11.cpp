#include<iostream>
using namespace std;
        
        // PATTERN 1
        // 4 
        // 4 3 
        // 4 3 2 
        // 4 3 2 1

int main(){
    int n=4;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << " "<<n-j+1;
            j = j + 1;
        }
        cout<<endl;
        i  =  i  + 1;
    }


return 0;
}