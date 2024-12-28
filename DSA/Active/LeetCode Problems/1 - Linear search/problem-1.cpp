//leetcode problem 1
//link: https://leetcode.com/problems/two-sum/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i = 0;i < n;i++){
            for(int j= i+1 ;j < n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int main(){
    vector<int> nums = {2, 3, 4, 5, 6, 7};
    Solution first;

    vector<int> ans = first.twoSum(nums, 13);

    cout <<ans[0]<<"   "<<ans[1];



return 0;
}