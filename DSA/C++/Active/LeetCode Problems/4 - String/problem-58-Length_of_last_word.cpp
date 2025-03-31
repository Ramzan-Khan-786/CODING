// https://leetcode.com/problems/length-of-last-word/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0, i = s.size() - 1;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

int main() {
    Solution solution;

    string test1 = "Hello World";
    string test2 = "   fly me   to   the moon  ";
    string test3 = "luffy is still joyboy";
    string test4 = "a";
    string test5 = "b   ";

    cout << "Test 1: " << solution.lengthOfLastWord(test1) << " (Expected: 5)" << endl;
    cout << "Test 2: " << solution.lengthOfLastWord(test2) << " (Expected: 4)" << endl;
    cout << "Test 3: " << solution.lengthOfLastWord(test3) << " (Expected: 6)" << endl;
    cout << "Test 4: " << solution.lengthOfLastWord(test4) << " (Expected: 1)" << endl;
    cout << "Test 5: " << solution.lengthOfLastWord(test5) << " (Expected: 1)" << endl;

    return 0;
}
