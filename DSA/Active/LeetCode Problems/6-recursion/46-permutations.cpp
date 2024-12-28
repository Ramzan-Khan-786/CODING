// Url: https://leetcode.com/problems/permutations/
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums ,vector<vector<int>> &ans,int index){
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j = index ; j<nums.size() ; j++){
            swap(nums[index],nums[j]);
            solve(nums , ans , index+1);

            swap(nums[index],nums[j]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index =0;
        solve (nums,ans ,index);
        return ans;
    }
};

int main(){
    cout <<endl << "Hello World" << endl;

    Solution mySolution;
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = mySolution.permute(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}