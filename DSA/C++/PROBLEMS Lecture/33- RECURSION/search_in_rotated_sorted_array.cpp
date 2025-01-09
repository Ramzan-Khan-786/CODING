//https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554
#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &arr, int n) {

  int s = 0;
  int e = n - 1;

  int mid = s + ((e - s) / 2);

  while (s < e) {
    if (arr[mid] >= arr[0]) {
      s = mid+1;
    } else {
      e = mid;
    }
    mid = s + ((e - s) / 2);
  }
  return s;
}

int binarySearch(vector<int> &arr, int s, int e, int key) {
  
    if(s>e){
        return -1;
    }
    int mid = s + (e - s) / 2;

    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        binarySearch(arr,mid+1,e,key);
    }
    else{
        binarySearch(arr,s,mid-1,key);
    }
  
}

int search(vector<int> &arr, int n, int k) {
  int pivot = getPivot(arr, n);
  if (k >= arr[pivot] && k <= arr[n - 1]) {
    return binarySearch(arr, pivot, n - 1, k);
  } else {
    return binarySearch(arr, 0, pivot - 1, k);
  }
}


int main() {
    cout <<endl << "Hello World" << endl;
    
    return 0;
}