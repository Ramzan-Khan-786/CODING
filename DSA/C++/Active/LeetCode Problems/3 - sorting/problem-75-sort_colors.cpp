// problem - 75-sort_colors
// link: https://leetcode.com/problems/sort-colors/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    int partition(vector<int>& arr, int start, int end) {
        int pivot = arr[start];
        int i = start + 1, j = end;
        while (i <= j) {
            while (i <= j && arr[i] <= pivot) i++;
            while (i <= j && arr[j] > pivot) j--;
            if (i < j) swap(arr[i], arr[j]);
        }
        swap(arr[start], arr[j]);
        return j;
    }

    void quickSort(vector<int>& arr, int start, int end) {
        if (start >= end) return;
        int pivotIndex = partition(arr, start, end);
        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }

public:
    void sortColors(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
    }
};

void printVector(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    sol.sortColors(nums1);
    cout << "Sorted Colors (Test Case 1): ";
    printVector(nums1); // Expected Output: 0 0 1 1 2 2

    // Test Case 2
    vector<int> nums2 = {2, 0, 1};
    sol.sortColors(nums2);
    cout << "Sorted Colors (Test Case 2): ";
    printVector(nums2); // Expected Output: 0 1 2

    // Test Case 3
    vector<int> nums3 = {0};
    sol.sortColors(nums3);
    cout << "Sorted Colors (Test Case 3): ";
    printVector(nums3); // Expected Output: 0

    // Test Case 4
    vector<int> nums4 = {1, 2, 0, 1, 2, 0, 0, 2, 1};
    sol.sortColors(nums4);
    cout << "Sorted Colors (Test Case 4): ";
    printVector(nums4); // Expected Output: 0 0 0 1 1 1 2 2 2

    return 0;
}
