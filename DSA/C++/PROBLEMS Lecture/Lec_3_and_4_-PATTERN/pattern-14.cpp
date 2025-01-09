#include<iostream>
using namespace std;
    // PATTERN 1
    // A B C D E 
    // A B C D E
    // A B C D E
    // A B C D E


int main(){
    int n=5;

    int i=1;

    while(i<=n){

        int j=1;
        
        while(j<=n){
            cout<<char('A' +j-1)<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
return 0;
}