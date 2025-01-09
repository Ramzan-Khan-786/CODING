// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/find-mex-62916c25/
#include<bits/stdc++.h>
using namespace std;

vector<int> getMEX(vector<int> arr) {
    int n=arr.size();
    vector<int> ans;
    int ians=0;
    for(int i=0;i<n;i++){
        for(int val=0;val<=i;val++){
            for(int j=0;j<=i;j++){
                if(val==arr[j]){
                    ans.push_back(val);
                    break;
                    return ans;
                }

            }
        }
    }
}
int main(){

    vector<int> arr={1,0,5,5,3};
    vector<int> ans=getMEX(arr);

    cout<<ans[0];

    


return 0;
}
