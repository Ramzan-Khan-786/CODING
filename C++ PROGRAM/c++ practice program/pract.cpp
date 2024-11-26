#include<iostream>
using namespace std;

int main(){
    int num=567;
    int numcopy=num;
    int rem =0;
    int copnum=0;
   for (int i = 0; numcopy<10; numcopy=copnum)
   {    
           while(numcopy!=0){
            rem=numcopy%10;
            copnum=copnum+rem;
            numcopy=numcopy/10;
            
        }
        cout<<copnum<<endl;

 }
return 0;
}