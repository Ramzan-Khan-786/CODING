// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_839724
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int firstOcc(vector<int> &arr,int n,int key){
    int s=0,e=(n-1);
    int mid=s+((e-s)/2);

    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else if(key < arr[mid]){
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}

int lastOcc(vector<int> &arr,int n,int key){
    int s=0,e=(n-1);
    int mid=s+((e-s)/2);

    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else if(key < arr[mid]){
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}

vector<int> searchRange(vector<int> &arr, int x)
{   
    int n=arr.size();
	int first = firstOcc(arr,n,x);
    int last = lastOcc(arr,n,x);

    return {first,last};
}

int main(){
     vector<int> arr = {2, 3, 4, 5, 5, 5, 6, 6};

    vector<int> result = searchRange(arr, 5);

    cout << "First Occurrence: " << result[0] << endl;
    cout << "Last Occurrence: " << result[1] << endl;
    
return 0;
}