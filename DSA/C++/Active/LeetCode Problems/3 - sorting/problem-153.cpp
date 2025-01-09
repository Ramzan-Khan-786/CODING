// Problem Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};

int main(){
    vector<int> arr={5,6,7,1,2,3};
    Solution first;
    cout<< first.findMin(arr);
return 0;
}