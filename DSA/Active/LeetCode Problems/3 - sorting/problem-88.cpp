#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }  
    }
};


int main(){
vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {2, 3, 4, 5, 7, 8};

    int m = 4;  
    int n = nums2.size();

    Solution first;
    first.merge(nums1, m, nums2, n);

    
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}