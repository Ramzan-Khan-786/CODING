#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
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