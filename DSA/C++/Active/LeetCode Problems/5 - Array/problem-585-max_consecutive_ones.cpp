// link:https://leetcode.com/problems/max-consecutive-ones/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prev = 0, count = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) {
                prev = max(prev, count);
                count = 0; 
            } else {
                count++;
            }
        }

        return max(prev, count); 
    }
};

int main() {
    Solution solution;

    vector<int> test1 = {1, 1, 0, 1, 1, 1};
    vector<int> test2 = {1, 0, 1, 1, 0, 1};
    vector<int> test3 = {1, 1, 1, 1, 1, 1};
    vector<int> test4 = {0, 0, 0, 0};
    vector<int> test5 = {1, 1, 0, 1};

    cout << "Test 1: " << solution.findMaxConsecutiveOnes(test1) << " (Expected: 3)" << endl;
    cout << "Test 2: " << solution.findMaxConsecutiveOnes(test2) << " (Expected: 2)" << endl;
    cout << "Test 3: " << solution.findMaxConsecutiveOnes(test3) << " (Expected: 6)" << endl;
    cout << "Test 4: " << solution.findMaxConsecutiveOnes(test4) << " (Expected: 0)" << endl;
    cout << "Test 5: " << solution.findMaxConsecutiveOnes(test5) << " (Expected: 2)" << endl;

    return 0;
}
