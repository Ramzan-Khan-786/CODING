// link: https://leetcode.com/problems/add-strings/ 
#include <bits/stdc++.h>
using namespace std;

class Solution {
private: 
    void insertAtFront(string &result, char digit) {
        result = digit + result;
    }

    string addString(string num1, string num2) {
        int carry = 0;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        string result = "";

        while (i >= 0 || j >= 0 || carry != 0) {
            int val1 = (i >= 0) ? num1[i] - '0' : 0;
            int val2 = (j >= 0) ? num2[j] - '0' : 0;

            int sum = carry + val1 + val2;
            char digit = (sum % 10) + '0';

            insertAtFront(result, digit);

            carry = sum / 10;
            i--;
            j--;
        }

        return result;
    }
public:
    string addTwoNumbersAsString(string num1, string num2) {
        return addString(num1, num2);
    }
    
    string addStrings(string num1, string num2) {
        return addTwoNumbersAsString(num1, num2);
    }
};

int main() {
    Solution solution;

    string num1 = "12345";
    string num2 = "9876";

    string result = solution.addStrings(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
