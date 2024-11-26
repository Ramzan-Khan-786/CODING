#include<iostream>
using namespace std;

int main(){
    char x;
    
    cin>>x;
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U'){
        cout<<"voWel";
    }
    else{
       cout<<"consonent" ;
    }


 return 0;
}