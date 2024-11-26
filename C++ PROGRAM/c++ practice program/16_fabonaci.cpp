#include<iostream>
using namespace std;
int fabonaci(int fab){
    
}
int main(){
    int n=8, a=0 ,b=1;
    int nextterm;
// ***** foor loop *****
    for(int i=2;i<=n;i++){
        nextterm=a+b;
        a=b;
        b=nextterm;
    }
    cout <<nextterm;
// ***** recursion ******

return 0;
}