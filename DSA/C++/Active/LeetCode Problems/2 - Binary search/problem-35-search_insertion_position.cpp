// link : https://leetcode.com/problems/search-insert-position?envType=problem-list-v2&envId=array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};


int main() {
    cout <<endl << "Hello World" << endl;

    vector<int> arr = {1,3,5,6};
    Solution first;
    cout << first.searchInsert(arr, 8);
    
    return 0;
}