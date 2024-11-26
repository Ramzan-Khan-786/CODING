#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count[2001] = {0};
        for (int i = 0; i < arr.size(); i++) {
            count[arr[i] + 1000]++;
        }

        int occurrences[1001] = {0};
        for (int i = 0; i < 2001; i++) {
            if (count[i] > 0) {
                occurrences[count[i]]++;
            }
        }

        for (int i = 0; i < 1001; i++) {
            if (occurrences[i] > 1) {
                return false;
            }
        }

        return true;       
    }
};

int main() {
    vector<int> arr = {1, 2, 1, 2, 2, 3};
    Solution first;
    
    cout << (first.uniqueOccurrences(arr) ? "true" : "false") << endl;

    return 0;
}