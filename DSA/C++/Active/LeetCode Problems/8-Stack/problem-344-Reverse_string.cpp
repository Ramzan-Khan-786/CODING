// link - https://leetcode.com/problems/reverse-string/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;

        for (char ch : s) {
            st.push(ch);
        }

        for (int i = 0; i < s.size(); ++i) {
            s[i] = st.top();
            st.pop();
        }
    }
};

void printVector(const vector<char>& s) {
    for (char ch : s) {
        cout << ch << " ";
    }
    cout << endl;
}

int main() {
    Solution solution;

    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    cout << "Original string: ";
    printVector(s);

    solution.reverseString(s);

    cout << "Reversed string: ";
    printVector(s);

    return 0;
}
