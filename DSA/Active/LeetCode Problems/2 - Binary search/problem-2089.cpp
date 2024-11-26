#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
class Solution {
public:
    int firstOcc(vector<int>& arr, int n, int key) {
        int s = 0, e = (n - 1);
        int mid = s + ((e - s) / 2);

        int ans = -1;

        while (s <= e) {
            if (arr[mid] == key) {
                ans = mid;
                e = mid - 1;
            } else if (key > arr[mid]) {
                s = mid + 1;
            } else if (key < arr[mid]) {
                e = mid - 1;
            }
            mid = s + ((e - s) / 2);
        }
        return ans;
    }

    int lastOcc(vector<int>& arr, int n, int key) {
        int s = 0, e = (n - 1);
        int mid = s + ((e - s) / 2);

        int ans = -1;

        while (s <= e) {
            if (arr[mid] == key) {
                ans = mid;
                s = mid + 1;
            } else if (key > arr[mid]) {
                s = mid + 1;
            } else if (key < arr[mid]) {
                e = mid - 1;
            }
            mid = s + ((e - s) / 2);
        }
        return ans;
    }

    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();

        // for (int i = 0; i < n; i++) {
        //     int temp = 0;
        //     if (nums[i] > nums[i + 1]) {
        //         temp = nums[i];
        //         nums[i] = nums[i + 1];
        //         nums[i + 1] = temp;
        //     } else {
        //         continue;
        //     }
        // }

        sort(nums.begin(), nums.end());

        int first = firstOcc(nums, n, target);
        int last = lastOcc(nums, n, target);

        if (first == -1) {
            return {};
        } else {
            vector<int> result(last - first + 1);
            for (int i = 0; i <= last - first; ++i) {
                result[i] = first + i;
            }
            return result;
        }
    }
};
int main()
{
    vector<int> arr = {2, 3, 4, 3, 5, 6};
    Solution first;
    vector<int> ans=first.targetIndices(arr,3);
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
    return 0;
}