// https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool isPossible(vector<int> &boards, int k,int n , int mid){
    int painter=1;
    int boardssum=0;

    for(int i=0;i<n;i++){
        if(boardssum + boards[i] <= mid){
            boardssum+=boards[i];
        }
        else{
            painter++;
            if(painter > k || boards[i] > mid){
                return false;
            }
            boardssum=boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    int s = 0;
    int sum = 0;

    for(int i = 0;i < n ; i++){
        sum+=boards[i];
    }

    int e = sum;

    int ans = -1;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossible(boards,k,n,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={7,6,5,8};
    cout<<findLargestMinDistance(arr,2);
return 0;
}