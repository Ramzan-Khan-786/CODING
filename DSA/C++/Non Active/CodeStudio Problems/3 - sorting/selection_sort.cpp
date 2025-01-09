// https://www.naukri.com/code360/problems/selection-sort_981162
#include<iostream>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;


void selectionSort(vector<int> &arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    swap(arr[mini], arr[i]);
  }
}

// vector<int> selectionSort(vector<int> arr, int n){
//     for(int i = 0; i<n-1;i++){
//         int minindex=i;
//         for(int j = i + 1 ; j < n ; j++){
//             if(arr[j]<arr[minindex]){
//                 minindex=j;
//             }
//         }
//         swap(arr[i],arr[minindex]);
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<endl;
//     }
// }

int main(){

    vector<int> arr={7,9,1,2,6,3,5,4};
    selectionSort(arr,arr.size());

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
return 0;
}