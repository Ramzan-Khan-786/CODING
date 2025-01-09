// https://www.naukri.com/code360/problems/sort-0-1-2_631055
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

#include <bits/stdc++.h>
void sort012(int *arr, int n) {
  int zero = 0;
  int two = n - 1;
  int one = 0;

  vector<int> temparr(n, 0); 

  while (true) {
    for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
        temparr[zero] = arr[i];
        zero++;
      } else if (arr[i] == 2) {
        temparr[two] = arr[i];
        two--;
      }
    }

    for (int i = zero; i <= two; i++) { 
      temparr[i] = 1;
    }

    break; 
  }

  for (int i = 0; i < n; i++) {
    arr[i] = temparr[i]; 
  }
}

int main(){

    int arr[6]={0,1,2,0,1,2};
    int n=sizeof(arr)/sizeof(arr[6]);
    sort012(arr,n);

    for(int i = 0 ; i < n ; i++ ){
        cout<<arr[i]<<" ";
    }

    

return 0;
}