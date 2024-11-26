#include<iostream>
using namespace std;
int toReverse(int x){
    int reverse=0, rem=0;
    if(x==0){
        return reverse;
    }
    rem=x%10;
    reverse=reverse*10+rem;
    cout<<reverse;
    return toReverse(x/10);

}

int main(){
    int num=987654321;
    // int rem=0;
    // int reverse=0;

// ****** while loop ******
   
    // while(num!=0){
    //     rem=num%10;
    //     reverse=reverse*10+rem;
    //     num=num/10;
    // }
    
// cout<< reverse;

// *****by using recursion*****
    cout<<toReverse(num);

return 0;
}