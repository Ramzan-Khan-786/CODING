// https://leetcode.com/problems/single-element-in-a-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        if (nums[0] != nums[1])
            return nums[0];
        if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];

        int low = 1, high = n - 2;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
            {
                return nums[mid];
            }

            if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) ||
                (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution solution;

    vector<vector<int>> testCases = {
        {1, 1, 2, 2, 3, 3, 4},
        {3, 3, 7, 7, 10, 11, 11},
        {1, 1, 2, 2, 5},
        {0, 0, 1},
        {2},
        {1, 1, 2, 3, 3},
        {10, 10, 11, 11, 12}};

        

    return 0;
}
