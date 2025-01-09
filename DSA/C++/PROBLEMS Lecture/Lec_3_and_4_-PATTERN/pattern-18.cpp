#include<iostream>
using namespace std;
// PATTERN 1
// * * * *
// * * *
// * *
// * 

int main(){
    int n = 4;
    
    int i = 1;
    

    while(i<=n){
        int star = n-i;
        while(star>=0){
            cout<<"* ";
            star=star-1;
        }
        cout<<endl;
        i=i+1;
    }

return 0; 
}