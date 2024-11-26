#include <bits/stdc++.h>
using namespace std;

bool isFound(int arr[],int start,int end ,int key){

    if(start>end){
        return false;
    }
    int mid = start + (end - start) / 2;

    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        isFound(arr,mid+1,end,key);
    }
    else{
        isFound(arr,start,mid-1,key);
    }

}

int main() {
    cout <<endl << "Hello World" << endl;
    int arr[5]={2,4,6,7,8};
    cout<<isFound(arr,0,4,5);
    return 0;
}