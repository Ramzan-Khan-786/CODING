#include<iostream>
using namespace std;
    // PATTERN 1
    // A A A A A 
    // B B B B B
    // C C C C C
    // D D D D D
    // E E E E E


int main(){
    int n=5;

    int i=1;

    while(i<=n){

        int j=1;
        
        while(j<=n){
            cout<<char('A' +i-1)<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
return 0;
}