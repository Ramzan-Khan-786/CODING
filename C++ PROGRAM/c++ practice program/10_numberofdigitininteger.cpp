#include<iostream>
using namespace std;

int main(){
    int a=98000000;
    int digit=0;
    while (a!=0){
    a=a/10;
    digit++;
    };
    cout <<digit;

    
    
return 0;
}