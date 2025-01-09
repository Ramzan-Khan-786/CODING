// link : https://leetcode.com/problems/sort-an-array?envType=problem-list-v2&envId=sorting
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
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

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = nums[i];
        }
        mergeSort(arr, 0, n - 1);
        for (int i = 0; i < n; i++) {
            nums[i] = arr[i];
        }
        delete[] arr;
        return nums;
    }
};


int main() {
    vector<int> arr = {5, 2, 4, 1, 9,3};
    Solution solution;
    vector<int> sortedArr = solution.sortArray(arr);
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
