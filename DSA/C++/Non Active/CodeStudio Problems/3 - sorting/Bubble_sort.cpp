// https://www.naukri.com/code360/problems/bubble-sort_980524
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i < n;i++){

        for(int j = 0 ; j < n-i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
vector<int> arr={100,82,0,5,8,54,34,22,67};

bubbleSort(arr,arr.size());

for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

return 0;
}