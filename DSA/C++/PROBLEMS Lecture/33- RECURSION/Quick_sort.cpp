#include <bits/stdc++.h>
using namespace std;

int partition(int* arr, int start, int end) {
    cout<<endl<<" array in partition"<<endl;
    for(int i=0;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    

    cout<< endl<<start << " index in partition " << end << endl;
    cout<<arr[start]<<" arr in partition "<<arr[end]<<endl;
    int pivot = arr[start];
    int smallerCount = 0;

    for (int i = start + 1; i <= end; i++) {
        if (arr[i] < pivot) {
            smallerCount++;
        }
    }

    int pivotIndex = start + smallerCount;
    swap(arr[start], arr[pivotIndex]);
    
    int left = start;
    int right = end;

    while (left < pivotIndex && right > pivotIndex) {
        while (arr[left] < pivot) {
            left++;
        }
        while (arr[right] > pivot) {
            right--;
        }
        if (left < pivotIndex && right > pivotIndex) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    cout<<endl<<" value at pivotindex "<< arr[pivotIndex]  <<endl;

    return pivotIndex;
}

void quickSort(int* arr, int start, int end) {
    cout <<endl<<" original array in quick sort"<<endl;
    for(int i=0;i<=end;i++){  
        cout<<arr[i]<<" ";
    }

    cout<<endl<< start << " index " << end << endl;
    cout<<arr[start]<<" arr "<<arr[end]<<endl;
    if (start >= end) {
        return;
    }

    int pivotIndex = partition(arr, start, end);
    cout<< pivotIndex << endl;

    quickSort(arr, start, pivotIndex - 1);

    quickSort(arr, pivotIndex + 1, end);

}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 4, 1, 3};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << "main() Function array"<<endl;
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    quickSort(arr, 0, arrSize - 1);

    cout << "Sorted array: ";
    printArray(arr, arrSize);

    return 0;
}
