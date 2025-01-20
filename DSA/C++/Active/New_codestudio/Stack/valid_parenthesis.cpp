// https://www.naukri.com/code360/problems/valid-parenthesis_795104
#include <bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        } else {
            if (!s.empty()) {
                char top = s.top();
                if ((ch == ')' && top == '(') || 
                    (ch == ']' && top == '[') || 
                    (ch == '}' && top == '{')) {
                    s.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    // Test cases
    vector<string> testCases = {
        "()",        // Valid
        "()[]{}",    // Valid
        "(]",        // Invalid
        "([)]",      // Invalid
        "{[]}",      // Valid
        "(",         // Invalid
        "}"          // Invalid
    };

    for (const string& test : testCases) {
        cout << "Expression: " << test 
             << " -> " << (isValidParenthesis(test) ? "Valid" : "Invalid") << endl;
    }

    return 0;
}
