// https://leetcode.com/problems/to-lower-case/
#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    char solve(char ch) {
        if (!(ch >= 'A' && ch <= 'Z')) {
            return ch;
        } else {
            return ch - 'A' + 'a';
        }
    }

public:
    string toLowerCase(string s) {
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            ans.push_back(solve(s[i]));
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string testString = "HeLLoWORLD";
    string result = solution.toLowerCase(testString);
    cout << "Input: " << testString << endl;
    cout << "Output: " << result << endl;
    return 0;
}
