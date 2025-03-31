//https://leetcode.com/problems/longest-palindromic-substring/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool solve(vector<vector<bool>>& dp, int i, int j, string& s) {
        if (i == j) {
            return dp[i][j] = true;
        }
        if (j - i == 1) {
            return dp[i][j] = (s[i] == s[j]);
        }
        return dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
    }

public:
    string longestPalindrome(string s) {
        int n = s.size();
        int startIndex = 0;
        int maxlen = 0;
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        for (int g = 0; g < n; g++) {
            for (int i = 0, j = g; j < n; i++, j++) {
                solve(dp, i, j, s);
                if (dp[i][j]) {
                    if (j - i + 1 > maxlen) {
                        startIndex = i;
                        maxlen = j - i + 1;
                    }
                }
            }
        }
        return s.substr(startIndex, maxlen);
    }
};

int main() {
    Solution solution;

    vector<string> testCases = {
        "babad",
        "cbbd",
        "a",
        "racecar",
        "abcdef",
        "abccba",
        "bananas"
    };

    for (const auto& test : testCases) {
        cout << "Input: " << test << " -> Longest Palindrome: " << solution.longestPalindrome(test) << endl;
    }

    return 0;
}
