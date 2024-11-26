#include<iostream>
using namespace std;

int main(){
    int arr[5]={8,98,9,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
   

    cout <<"before"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    for(int i=0;i<size;i=i+2){
        if(i+1<size)
         swap(arr[i], arr[i+1]);
    }


    cout<<endl <<"after"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    
return 0;
}