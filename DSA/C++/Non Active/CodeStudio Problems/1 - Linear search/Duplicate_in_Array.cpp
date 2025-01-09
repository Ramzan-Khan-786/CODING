// https://www.naukri.com/code360/problems/duplicate-in-array_893397
#include<iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    int ans=0;

    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }

    for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}


int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 5}; 
    int duplicate = findDuplicate(arr);
    
    cout << "Duplicate element: " << duplicate << endl;
return 0;
}