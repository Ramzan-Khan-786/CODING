#include<iostream>
using namespace std;
        
        // PATTERN 1
        // 1 2 3 4
        // 1 2 3 4
        // 1 2 3 4
        // 1 2 3 4

int main(){
    int n=4;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << " "<<j;
            j = j + 1;
        }
        cout<<endl;
        i  =  i  + 1;
    }


return 0;
}