#include<iostream>
using namespace std;

int main(){
    int num=63,renum,rem=0,val=0;
    renum=num;
    while(num>0){
        rem=num%10;
        val=val+rem;
        num=num/10;
    }

    if(renum%val==0){
        cout<<"harshad number"<<endl;
    }
    else{
        cout<<"not harshad number"<<endl;
    }
return 0;
}