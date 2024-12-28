// URL: https://leetcode.com/problems/third-maximum-number/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end(),greater<int>());
        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());

        if (nums.size() < 3) {
            return nums[0];
        }

        return nums[2];
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 3, 1};
    int result = sol.thirdMax(nums);
    cout << "Third maximum: " << result << endl;
    
    return 0;
}