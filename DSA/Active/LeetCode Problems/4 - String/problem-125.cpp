#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    char toLowercase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            return ch - 'A' + 'a';
        }
    }

    int validChar(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return 1;
        }
        return 0;
    }

public:
    bool isPalindrome(string s) {

        int st = 0;
        int en = s.length() - 1;

        while (st < en) {
            if (!validChar(s[st])) {
                st++;
                continue;
            }
            if (!validChar(s[en])) {
                en--;
                continue;
            }
            if (toLowercase(s[st]) != toLowercase(s[en])) {
                return false;
            } else {
                st++;
                en--;
            }
        }
        return true;
    }
};

int main() {
    cout << "HELLO WORLD" << endl;

    string s="A man, a plan, a canal: Panama";

    Solution first;
    cout<<first.isPalindrome(s)<<endl;

    return 0;
}