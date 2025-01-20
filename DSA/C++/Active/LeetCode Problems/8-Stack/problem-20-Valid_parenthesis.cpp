// link - https://leetcode.com/problems/valid-parentheses/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[') {
                str.push(ch);
            } else {
                if (!str.empty()) {
                    char top = str.top();
                    if ((ch == ')' && top == '(') || 
                        (ch == ']' && top == '[') || 
                        (ch == '}' && top == '{')) {
                        str.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return str.empty();
    }
};

int main() {
    Solution solution;

    // Test cases
    string test1 = "()";
    string test2 = "()[]{}";
    string test3 = "(]";
    string test4 = "([)]";
    string test5 = "{[]}";

    cout << "Test case 1: " << test1 << " -> " << (solution.isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << "Test case 2: " << test2 << " -> " << (solution.isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << "Test case 3: " << test3 << " -> " << (solution.isValid(test3) ? "Valid" : "Invalid") << endl;
    cout << "Test case 4: " << test4 << " -> " << (solution.isValid(test4) ? "Valid" : "Invalid") << endl;
    cout << "Test case 5: " << test5 << " -> " << (solution.isValid(test5) ? "Valid" : "Invalid") << endl;

    return 0;
}
