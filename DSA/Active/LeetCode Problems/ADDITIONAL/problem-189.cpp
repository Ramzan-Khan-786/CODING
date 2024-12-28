// URL: https://leetcode.com/problems/rotate-array/
#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            arr[(i + k) % n] = nums[i];
        }

        nums = arr;
    }
};
int main(){

vector<int> arr={3,4,5,6,1,2}; 
Solution first;

first.rotate(arr,2);

for(int i =0; i<arr.size();i++){
    cout<<arr[i]<<"  ";
}
return 0;
}