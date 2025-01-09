#include<iostream>
using namespace std;

int main(){
    
    int n = 5 ;
    int i = 1 ;

    while(i<=n){

        int num1=n-i+1;
        
        while(num1>=1){
            cout<<num1<<" ";
            num1=num1-1;
        }
        
        int star=1;

        while(star<i){
            cout<<"* * ";
            star=star+1;
        }

        int num2=n+1-i;

        while(num2>0){
            cout<<num2<<" ";
            num2=num2-1;
        }

        cout<<endl;
        i++;
    }
return 0;
}