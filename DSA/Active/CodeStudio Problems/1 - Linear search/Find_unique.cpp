// https://www.naukri.com/code360/problems/find-unique_625159
#include<iostream>
using namespace std;
int getUnique(int arr[],int size){
    int unique;
    for(int i = 0 ; i < size ; i++ ){
        unique=unique^arr[i];
    }
    return unique;
}
int main(){
    int arr[5]={3,5,3,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<getUnique(arr,size);

return 0;
}