#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
class Solution
{
public:
    int firstOcc(vector<int> &arr, int n, int key)
    {
        int s = 0, e = (n - 1);
        int mid = s + ((e - s) / 2);

        int ans = -1;

        while (s <= e)
        {
            if (arr[mid] == key)
            {
                ans = mid;
                e = mid - 1;
            }
            else if (key > arr[mid])
            {
                s = mid + 1;
            }
            else if (key < arr[mid])
            {
                e = mid - 1;
            }
            mid = s + ((e - s) / 2);
        }
        return ans;
    }

    int lastOcc(vector<int> &arr, int n, int key)
    {
        int s = 0, e = (n - 1);
        int mid = s + ((e - s) / 2);

        int ans = -1;

        while (s <= e)
        {
            if (arr[mid] == key)
            {
                ans = mid;
                s = mid + 1;
            }
            else if (key > arr[mid])
            {
                s = mid + 1;
            }
            else if (key < arr[mid])
            {
                e = mid - 1;
            }
            mid = s + ((e - s) / 2);
        }
        return ans;
    }
    vector<int> searchRange(vector<int> &nums, int key)
    {
        int n = nums.size();
        int first = firstOcc(nums, n, key);
        int last = lastOcc(nums, n, key);

        return {first, last};
    }
};
int main()
{
    Solution first;

    vector<int> arr = {2, 3, 4, 5, 5, 5, 6, 6};
    vector<int> result =first.searchRange(arr, 5);

    cout << "First Occurrence: " << result[0] << endl;
    cout << "Last Occurrence: " << result[1] << endl;

    return 0;
}