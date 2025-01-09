// https://www.naukri.com/code360/problems/binary-search_972
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int search(vector<int> &arr, int key) {
  int size = arr.size();
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start) / 2;

  while (start <= end) {

    if (arr[mid] == key) {
      return mid;
    }

    if (key > arr[mid]) {
      start = mid + 1;
    }

    if (key < arr[mid]) {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }
  return -1;
}

int main(){
vector<int> arr={2,3,4,5,5,555,55};
cout<<search(arr,555);

return 0;
}