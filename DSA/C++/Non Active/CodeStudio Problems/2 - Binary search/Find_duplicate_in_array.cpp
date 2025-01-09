// https://www.naukri.com/code360/problems/find-duplicate-in-array_1112602
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
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

int main(){
vector<int> arr = {2, 3, 4, 5, 5, 5, 6, 9};

cout<<findDuplicate(arr,arr.size());

return 0;
}