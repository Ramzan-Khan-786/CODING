//https://www.naukri.com/code360/problems/kth-largest-element-in-the-unsorted-array_893030
#include <bits/stdc++.h>

using namespace std;

int kthLargest(vector<int>& arr, int size, int K)
{
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());

	return arr[K-1];
}
int main() {
    cout << "HELLO WORLD" << endl;

    vector<int> arr={1,1,2,3,2,4,2,3,5,67,8};
    int ans=kthLargest(arr,arr.size(),3);
    cout<<ans<<endl;
    return 0;
}