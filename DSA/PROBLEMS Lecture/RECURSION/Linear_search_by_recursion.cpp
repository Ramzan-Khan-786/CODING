#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[],int size){
    cout<<"The size of array is "<<size<<endl;

    for(int i=0;i<=size;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

bool isPresent(int arr[],int size,int key){
    printArr(arr,size);
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else
    isPresent(arr+1,size-1,key);
}

int main() {
    cout <<endl << "Hello World" << endl;
    int arr[5]={1,2,3,4,5};
    int key=2;
    cout<<bool(isPresent(arr,4,key));

    return 0;
}