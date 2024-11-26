#include<iostream>
using namespace std;
int toFactorial(int num){
    if(num==0){
        return 1;
    }
    return num*toFactorial(num-1);
}
int main(){
    int num=6;
    int fact=1;
// ****** iterative approach ******* 
    
    if(num==0){
        cout<<"not posslible";
    }
    else{
        for(int i=1;i<=num;i++){
            fact=fact*i;
            
        }
        cout<<fact<<endl;
    }
    
// ****** recursive approach ********
    cout<<toFactorial(num);
    
return 0;
}