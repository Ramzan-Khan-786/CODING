// https://www.naukri.com/code360/problems/insertion-sort_3155179
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

#include <bits/stdc++.h>
void insertionSort(int n, vector<int> &arr) {

  for (int i = 1; i < n; i++) {

    int temp = arr[i];
    int j = i - 1;

    while (j >= 0) {
      if (arr[j] > temp) {
        arr[j + 1] = arr[j];
      } else {
        break;
      }
      j--;
    }
    arr[j + 1] = temp;
  }
}

int main(){
    vector<int> arr={88,6,77,5,66,4,0,3};
    insertionSort(arr.size(),arr);
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

return 0;
}