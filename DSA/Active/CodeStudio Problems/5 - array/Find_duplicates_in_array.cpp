// https://www.naukri.com/code360/problems/find-duplicates-in-array_1071935
#include <bits/stdc++.h>

using namespace std;

vector<int> findDuplicates(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());

    vector<int> ans;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] == arr[i - 1] && (ans.empty() || ans.back() != arr[i]))
        {
            ans.push_back(arr[i]);
        }
    }

    return ans;
}

int main()
{
    cout << "HELLO WORLD" << endl;

    vector<int> arr = {1, 1, 2, 3, 4, 3, 4, 2, 1, 5, 6, 7, 5, 7};

    vector<int> ans = findDuplicates(arr,arr.size());

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

return 0;
}