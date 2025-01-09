//link: https://leetcode.com/problems/find-peak-element/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int s = 0;
        int e = nums.size() - 1;

        int mid = s + ((e - s) / 2);
        
        while (s < e)
        {
            if (nums[mid] < nums[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + ((e - s) / 2);
        }
        return s;
    }
};

int main()
{
    vector<int> nums = {2, 3, 4, 5, 7, 2};

    Solution first;
    cout<<first.findPeakElement(nums);
    return 0;
}