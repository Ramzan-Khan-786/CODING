#include<iostream>
using namespace std;

// ****************************************

int getsum(long long int num,int sum){
    if(num==0)
        return sum;
    
    sum+=num%10;
    
    return getsum((num/10),sum);
}


// ******************************************


int getsum(long long int num,int sum){
    if(num==0){
        return 0;
    }

return (num%10)+getsum(num/10,sum);
}



int main(){
    int sum=0;
    long long int num=5777777777777777;

//  ********by using whiloe loop *********
    while(num!=0){
        sum+=num%10;
        num=num/10;
    }
    cout<<sum;

//  *********by using recursion **********
    cout <<getsum(num,sum);



return 0;
}