//https://www.naukri.com/code360/problems/merge-sort_920442
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int start, int end) {
    int mid = start + (end - start) / 2;
    int leftSize = mid - start + 1;
    int rightSize = end - mid;
                    
    vector<int> leftArray(leftSize);
    vector<int> rightArray(rightSize);

    int mainIndex = start;
    for (int i = 0; i < leftSize; i++) {
        leftArray[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for (int i = 0; i < rightSize; i++) {
        rightArray[i] = arr[mainIndex++];
    }

    int leftIndex = 0;
    int rightIndex = 0;
    mainIndex = start;

    while (leftIndex < leftSize && rightIndex < rightSize) {
        if (leftArray[leftIndex] < rightArray[rightIndex]) {
            arr[mainIndex++] = leftArray[leftIndex++];
        } else {
            arr[mainIndex++] = rightArray[rightIndex++];
        }
    }

    while (leftIndex < leftSize) {
        arr[mainIndex++] = leftArray[leftIndex++];
    }
    while (rightIndex < rightSize) {
        arr[mainIndex++] = rightArray[rightIndex++];
    }
}

void mergesort(vector<int>& arr, int start, int end) {
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);

    merge(arr, start, end);
}

void mergeSort(vector<int>& arr, int n) {
    mergesort(arr, 0, arr.size() - 1);
}



int main() {
    cout <<endl << "Hello World" << endl;
    vector<int> arr={1,111,2,3,2,4,29,3,5,67,8};
    mergeSort(arr,arr.size());    
    for(int i = 0 ; i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}