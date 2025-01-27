// link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};

int main() {
    Solution sol;

    vector<int> testCase1 = {3, 4, 5, 1, 2};
    vector<int> testCase2 = {4, 5, 6, 7, 0, 1, 2};
    vector<int> testCase3 = {11, 13, 15, 17};

    cout << "Test Case 1: " << endl;
    cout << "Array: {3, 4, 5, 1, 2}" << endl;
    cout << "Minimum Element: " << sol.findMin(testCase1) << endl;

    cout << "\nTest Case 2: " << endl;
    cout << "Array: {4, 5, 6, 7, 0, 1, 2}" << endl;
    cout << "Minimum Element: " << sol.findMin(testCase2) << endl;

    cout << "\nTest Case 3: " << endl;
    cout << "Array: {11, 13, 15, 17}" << endl;
    cout << "Minimum Element: " << sol.findMin(testCase3) << endl;

    return 0;
}
