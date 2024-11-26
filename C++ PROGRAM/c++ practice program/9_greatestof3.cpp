#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    int a,b,c;
    cin>>a>>b>>c;

// ****** If-Else statement *********

    if((a>b) && (a>c)){
        cout<<"The greater number is "<<a<<endl;
    }
    else if ((b>a)&&(b>c)){
        cout<<"The greater number is "<<b<<endl;
    }
    else{
        cout<<"The greater number is "<<c<<endl;
    }


// ****** using max function *********

    
    cout <<"the greater number is "<<max(max(a,b),c)<<endl;
    return 0;
}