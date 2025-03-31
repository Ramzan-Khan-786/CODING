// https://leetcode.com/problems/maximum-product-subarray/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_current = nums[0], min_current = nums[0], max_global = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) 
                swap(max_current, min_current); // Swap when encountering a negative number
            
            max_current = max(nums[i], max_current * nums[i]);
            min_current = min(nums[i], min_current * nums[i]);

            max_global = max(max_global, max_current);
        }

        return max_global;
    }
};

int main() {
    Solution sol;
    
    vector<int> test1 = {2, 3, -2, 4};
    cout << "Test 1 Output: " << sol.maxProduct(test1) << endl; // Expected: 6

    vector<int> test2 = {-2, 0, -1};
    cout << "Test 2 Output: " << sol.maxProduct(test2) << endl; // Expected: 0

    vector<int> test3 = {0, 2};
    cout << "Test 3 Output: " << sol.maxProduct(test3) << endl; // Expected: 2

    vector<int> test4 = {-1, -3, -10, 0, 60};
    cout << "Test 4 Output: " << sol.maxProduct(test4) << endl; // Expected: 60

    vector<int> test5 = {-1, -2, -3, -4};
    cout << "Test 5 Output: " << sol.maxProduct(test5) << endl; // Expected: 24

    return 0;
}
