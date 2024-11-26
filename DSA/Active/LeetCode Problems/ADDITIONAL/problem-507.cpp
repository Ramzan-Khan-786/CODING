#include<iostream>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans=0;
        for (int i = 1; i < num; ++i) {
            if (num % i == 0) {
                ans = ans + (i);
            }
        }
        if (ans == num) {
            return true;
        } else {
            return false;
        }
    }
};

int main(){
Solution first;
    int num;
    cout << "Enter a number to check if it is perfect: ";
    cin >> num;
    if (first.checkPerfectNumber(num)) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
}