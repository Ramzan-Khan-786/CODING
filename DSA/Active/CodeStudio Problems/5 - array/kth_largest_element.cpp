// https://www.naukri.com/code360/problems/kth-largest-element_796007
#include <bits/stdc++.h>

using namespace std;

 int findKthLargest(vector<int>& nums, int k) {

  sort(nums.begin(),nums.end(),greater<int>());
  
  return nums[k-1];

}

int main() {
    cout << "HELLO WORLD" << endl;

    vector<int> arr={1,2,4,2,4,6,4,3,22,4456,31,443};
    int ans=findKthLargest(arr,2);
    cout<<ans<<endl;
    return 0;
}