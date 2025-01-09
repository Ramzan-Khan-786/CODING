#include<iostream>
using namespace std;
int toSum(int arr[],int size){
    int sum=0;
    for(int i = 0 ; i < size ; i++ ){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){

    int arr[5]={3,44,56,7,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout <<toSum(arr,size);

return 0;
}