// https://leetcode.com/problems/rotate-array/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        vector<int> temp(size);

        for (int i = 0; i < size; i++) {
            temp[(i + k) % size] = nums[i];
        }

        for (int i = 0; i < size; i++) {
            nums[i] = temp[i];
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    
    solution.rotate(nums, k);
    
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
