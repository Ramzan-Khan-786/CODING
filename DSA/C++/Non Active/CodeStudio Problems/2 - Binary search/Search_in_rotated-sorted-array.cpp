// https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_630450
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int getPivot(int *arr, int n) {

  int s = 0;
  int e = n - 1;

  int mid = s + ((e - s) / 2);

  while (s < e) {
    if (arr[mid] >= arr[0]) {
      s = mid + 1;
    } else {
      e = mid;
    }
    mid = s + ((e - s) / 2);
  }
  return s;
}

int binarySearch(int *arr, int s, int e, int key) {

  int start = s;
  int end = e;

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

int search(int *arr, int n, int k) {
  int pivot = getPivot(arr, n);
  if (k >= arr[pivot] && k <= arr[n - 1]) {
    return binarySearch(arr, pivot, n - 1, k);
  } else {
    return binarySearch(arr, 0, pivot - 1, k);
  }
}

int main(){
    vector<int> vec = {3, 4, 5, 1, 2};
    int n = vec.size();
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = vec[i];
    }
    int key = 5;
    int result = search(arr, n, key);
    cout << "Index of " << key << " is: " << result << endl;
    return 0;
}