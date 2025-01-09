// https://www.naukri.com/code360/problems/first-missing-positive_699946
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

#include <bits/stdc++.h>
int firstMissing(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
      swap(arr[i], arr[arr[i] - 1]);
    }
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] != i + 1) {
      return i + 1;
    }
  }

  return n + 1;
}

int main(){

int arr[6]={1,2,4,5,6,7};

cout<<firstMissing(arr,5);


return 0;
}