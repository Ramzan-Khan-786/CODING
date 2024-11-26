#include<iostream>
using namespace std;

int toGetsum(int l,int a){
    
    if(l==a){
    return l;
    }
    return l+toGetsum((l-1),a);
}




int main(){
    int a=2,n,l=9,s;
    
// *****by using formula*****
    
    for(int i=a;i<=l;i++){
        n=n+1;
    }
    cout <<n<<endl;
    s=((n*(a+l))/2);
    cout<<s<<endl;
    
    

 
// *****by using for loop*****
    
    for(int i=a;i<=l;i++){
        n=n+i;
    }
    cout<<n<<endl;
    


// *****by using recursion*****
    cout<<toGetsum(l,a);




return 0;
}