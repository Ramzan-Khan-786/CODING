// problem 34 -longest valid parenthesis
// link: https://leetcode.com/problems/longest-valid-parentheses/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string st) {
        stack<int> s;
        s.push(-1);
        int maxLength = 0;

        for (int i = 0; i < st.length(); i++) {
            if (st[i] == '(') {
                s.push(i);
            } else {
                s.pop();
                if (s.empty()) {
                    s.push(i);
                } else {
                    maxLength = max(maxLength, i - s.top());
                }
            }
        }

        return maxLength;
    }
};

int main() {
    Solution sol;

    string st = "(()))())(";
    cout << "Longest valid parentheses: " << sol.longestValidParentheses(st) << endl;

    return 0;
}
