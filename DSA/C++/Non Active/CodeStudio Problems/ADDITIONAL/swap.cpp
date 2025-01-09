// https://www.naukri.com/code360/problems/swap-two-numbers_1112577
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void swapNumber(int &a, int &b) {
   int temp=a;
   a=b;
   b=temp;
}
int main(){
int a=5;
int b=8;
swapNumber(a,b);
cout<<"a="<<a<<endl<<"b="<<b;
return 0;
}