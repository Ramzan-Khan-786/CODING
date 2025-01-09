// https://www.naukri.com/code360/problems/aggressive-cows_1082559
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int lastpos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {

        if (stalls[i] - lastpos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{

    sort(stalls.begin(), stalls.end());

    int s = 0;
    int maxi = -1;

    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    vector<int> arr = {2, 3, 2, 4, 66, 1};

    cout << aggressiveCows(arr, 3);

    return 0;
}