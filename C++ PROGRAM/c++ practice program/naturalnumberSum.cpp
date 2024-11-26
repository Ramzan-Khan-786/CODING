// ******* sum of n natural numbers *******


#include<iostream>
using namespace std;


// ********** By using formula ************
int toSum(int n){
    int sum=1;
        sum=((n*(n+1))/2);
        return sum;
};


// ********** By using for loop ************
// int toSum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// };
// int main(){
// int a;
//  cout<<"Enter the number :  ";
//  cin>>a;
//  cout<<endl;
//  cout<<toSum(a);
//  return 0;
// }