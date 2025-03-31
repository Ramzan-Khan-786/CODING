// https://leetcode.com/problems/single-number/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            ans ^= nums[i];  
        }
        return ans;
    }
};

int main() {
    Solution solution;

    vector<int> test1 = {2, 2, 1};
    vector<int> test2 = {4, 1, 2, 1, 2};
    vector<int> test3 = {1};
    vector<int> test4 = {7, 3, 5, 3, 7};
    vector<int> test5 = {10, 10, 5, 6, 6};

    cout << "Test 1: " << solution.singleNumber(test1) << " (Expected: 1)" << endl;
    cout << "Test 2: " << solution.singleNumber(test2) << " (Expected: 4)" << endl;
    cout << "Test 3: " << solution.singleNumber(test3) << " (Expected: 1)" << endl;
    cout << "Test 4: " << solution.singleNumber(test4) << " (Expected: 5)" << endl;
    cout << "Test 5: " << solution.singleNumber(test5) << " (Expected: 5)" << endl;

    return 0;
}
