// 2390. Removing Stars From a String
// https://leetcode.com/problems/removing-stars-from-a-string
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        stack<char> ansstack;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '*') {
                ansstack.push(s[i]);
            } else if (!ansstack.empty()) {
                ansstack.pop();
            }
        }

        while (!ansstack.empty()) {
            ans += ansstack.top();
            ansstack.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    string s1 = "leet**cod*e";
    cout << "Input: " << s1 << "\nOutput: " << sol.removeStars(s1) << endl;
    // Expected Output: "lecoe"

    // Test Case 2
    string s2 = "erase*****";
    cout << "Input: " << s2 << "\nOutput: " << sol.removeStars(s2) << endl;
    // Expected Output: ""

    // Test Case 3
    string s3 = "abc*de**f*";
    cout << "Input: " << s3 << "\nOutput: " << sol.removeStars(s3) << endl;
    // Expected Output: "a"

    // Test Case 4
    string s4 = "a*b*c*d*";
    cout << "Input: " << s4 << "\nOutput: " << sol.removeStars(s4) << endl;
    // Expected Output: ""

    // Test Case 5
    string s5 = "ab***";
    cout << "Input: " << s5 << "\nOutput: " << sol.removeStars(s5) << endl;
    // Expected Output: ""

    return 0;
}
