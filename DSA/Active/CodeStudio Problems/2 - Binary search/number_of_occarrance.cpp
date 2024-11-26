// https://www.naukri.com/code360/problems/occurrence-of-x-in-a-sorted-array_630456
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
int count(vector<int>& arr, int n, int x) {

int mini=firstOcc(arr, n, x);
int maxi=lastOcc(arr, n, x);
    if(maxi==-1 && mini==-1){
	    return 0;
	}
	int countnum = maxi-mini+1;

return countnum;
}


int main(){

    vector<int> arr={1,2,3,3,3,3,4,5,5,6};
    int ans=count(arr,arr.size(),3);
    cout<<ans<<endl;

return 0;
}