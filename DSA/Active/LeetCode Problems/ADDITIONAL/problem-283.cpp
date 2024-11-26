#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};

int main(){
    vector<int> arr={2,0,3,0,9,4,0,0};
    Solution first;
    first.moveZeroes(arr);

    for(int i = 0 ; i<= arr.size();i++){
        cout<<arr[i]<<" ";
    }


return 0;
}