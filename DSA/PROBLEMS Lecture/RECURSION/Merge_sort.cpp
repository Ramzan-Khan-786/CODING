#include <bits/stdc++.h>
using namespace std;

void merge(int* arr, int start, int end) {
    int mid = start + (end - start) / 2;
    int leftSize = mid - start + 1;
    int rightSize = end - mid;
                    
    int* leftArray = new int[leftSize];
    int* rightArray = new int[rightSize];

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

    delete[] leftArray;
    delete[] rightArray;

}

void mergeSort(int* arr, int start, int end) {
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end);
}
    
int main() {
    int array[5]={8,7,9,5,4};

    // cout << "Enter 5 elements of array: ";

    // for (int i = 0; i < 5; i++) {
    //     cin >> array[i];
    // }

    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original array: ";

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    mergeSort(array, 0, size - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}
