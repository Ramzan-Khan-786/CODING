// Problem Link: https://leetcode.com/problems/find-the-duplicate-number/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans=-1;
        for(int i = 0 ; i < (arr.size() - 1) ;i++){
            if(arr[i]==arr[i+1]){
                ans=arr[i];
                break;
            }
        }

    return ans;
    }
};

int main() {
    cout <<endl << "Hello World" << endl;
    vector<int> arr = {1,3,4,2,2};
    Solution first;
    cout << first.findDuplicate(arr);

    return 0;
}


