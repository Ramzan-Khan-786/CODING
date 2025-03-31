// link:https://leetcode.com/problems/permutations-ii/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++) {
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);
            swap(nums[index], nums[j]);
        }
    }
    
    vector<vector<int>> removeDuplicate(vector<vector<int>>& permutations) {
        set<vector<int>> uniquePerms(permutations.begin(), permutations.end());
        return vector<vector<int>>(uniquePerms.begin(), uniquePerms.end());
    }
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return removeDuplicate(ans);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> result = sol.permuteUnique(nums);
    
    for (const auto& vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
