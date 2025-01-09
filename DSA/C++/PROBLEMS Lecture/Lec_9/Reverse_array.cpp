#include<iostream>
using namespace std;



int main(){
    int arr[5]={8,9,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout <<"before"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int revnum=0;
    for(int i=0;i<size/2;i++){
        revnum=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=revnum;
    }
     cout <<endl<<"after"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}