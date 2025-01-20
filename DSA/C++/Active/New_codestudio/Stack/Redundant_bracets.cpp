// https://www.naukri.com/code360/problems/redundant-brackets_975473
#include <bits/stdc++.h> 
using namespace std;

bool findRedundantBrackets(string &s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        } else {
            if (ch == ')') {
                bool isRedundant = true;
                while (st.top() != '(') {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '/' || top == '*') {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant) {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main() {
    // Test cases
    vector<string> testCases = {
        "(a+b)",         // Not redundant
        "((a+b))",       // Redundant
        "(a+(b*c))",     // Not redundant
        "((a+b)+(c*d))", // Redundant
        "((a))"          // Redundant
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test case " << i + 1 << ": \"" << testCases[i] 
             << "\" -> Redundant Brackets: " 
             << (findRedundantBrackets(testCases[i]) ? "Yes" : "No") << endl;
    }

    return 0;
}
