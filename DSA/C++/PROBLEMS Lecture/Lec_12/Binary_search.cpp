#include<iostream>
using namespace std;

int binarySearch(int arr[] ,int size,int key){
    
    int start = 0;
    int end =size-1;

    int mid = start +(end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start=mid+1;
        }


        if(key<arr[mid]){
            end=mid-1;
        }

        mid= start +(end-start)/2;

    }
    return -1;
}

int main(){

int evenarr[6]={2,4,6,8,10,12};
int oddarr[5]={1,3,5,7,9};

int evenindex=binarySearch(evenarr,6,4);
cout<< " , , , , :  "<<evenindex<<endl;

int oddindex=binarySearch(oddarr,6,55);
cout<< " , , , , :  "<<oddindex<<endl;

return 0;
}