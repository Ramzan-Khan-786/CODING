#include<iostream>
using namespace std;

    // PATTERN 1
    // A B C D E 
    // B C D E F
    // C D E F G
    // D E F G H
    // E F G H I

int main(){
    int n=5;

    int i=1;

while(i<=n){

        int j=0;
        
        while(j<n){
            cout<<char('A' +i+j-1)<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}