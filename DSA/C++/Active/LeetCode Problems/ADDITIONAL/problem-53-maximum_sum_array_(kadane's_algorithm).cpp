// Maximum Sum Array (Kadane's Algorithm)
// link: https://leetcode.com/problems/maximum-subarray/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = max(maxi, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
    int minSubArray(vector<int>& nums) {
        int sum = 0;
        int mini = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            mini = min(mini, sum);
            if (sum < 0)
                sum = 0;
        }
        return mini;
    }
};

int main() {
    Solution solution;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = solution.maxSubArray(nums);

    cout << "The maximum subarray sum is: " << result << endl;

    int mini = solution.minSubArray(nums);
    cout << "The minimum subarray sum is: " << mini << endl;

    return 0;
}
