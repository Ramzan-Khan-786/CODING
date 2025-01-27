// link:https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/description/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minChanges(string s) {
        int cnt = 0;
        for (int i = 0; i < s.length() - 1; i += 2) {
            if (s[i] != s[i + 1]) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    string s1 = "aabb"; // Should return 0 (already alternating in pairs)
    string s2 = "abab"; // Should return 2 (needs changes to become aabb or bbaa)
    string s3 = "aaaa"; // Should return 2 (needs changes to become aabb or bbaa)
    string s4 = "abcde"; // Edge case: Should only check pairs within bounds

    cout << "Test Case 1: " << solution.minChanges(s1) << endl; // Expected: 0
    cout << "Test Case 2: " << solution.minChanges(s2) << endl; // Expected: 2
    cout << "Test Case 3: " << solution.minChanges(s3) << endl; // Expected: 2
    cout << "Test Case 4: " << solution.minChanges(s4) << endl; // Expected: 2
    
    return 0;
}
