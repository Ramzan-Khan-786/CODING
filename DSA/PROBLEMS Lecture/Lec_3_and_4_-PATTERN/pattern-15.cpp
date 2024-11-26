#include<iostream>
using namespace std;
    // PATTERN 1
    // A B C D E 
    // F G H I J
    // K L M N O
    // P Q R S T
    // U V W X Y

int main(){
    int n=5;

    int i=1;

    int count=0;
    while(i<=n){

        int j=1;
        
        while(j<=n){
            cout<<char('A' +count)<<" ";
            j=j+1;
            count=count+1;
        }
        cout<<endl;
        i=i+1;
    }
return 0;
}