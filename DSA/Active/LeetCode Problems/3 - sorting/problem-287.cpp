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