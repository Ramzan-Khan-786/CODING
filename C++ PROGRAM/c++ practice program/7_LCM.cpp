#include<iostream>
using namespace std;
int toChkLCM(int a,int b){
    if(a==0){
    return b;
 }
 else if(b==0){
    return a;
 }
 else{
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
 }
}
int main(){
 int x,y;
 cout<<"Enter the num1:";
 cin>>x;
 cout<<"Enter the num2:";
 cin>>y;
 cout<<"GCD: "<<toChkLCM(x,y)<<endl;
 cout<<"LCM: "<<((x*y)/toChkLCM(x,y));
 return 0;
}