#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=1;
        
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
            }
            else if(nums[i]!= nums[i-1]){
                i++;
            }
        }
    
        return nums.size();
    }
};

int main() {

    cout << "HELLO WORLD" << endl<<endl;
    
    Solution first;
    vector<int> arr={1,2,2,3,3,4,4,4,4,5,5,6,7,8,8,9,};

    cout<<"Output before removing elements"<<endl;

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    first.removeDuplicates(arr);

    cout<<endl<<"Output after removing elements"<<endl;

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}