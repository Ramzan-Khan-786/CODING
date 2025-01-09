// https://www.naukri.com/code360/problems/merge-two-sorted-arrays-without-extra-space_6898839
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	
    int n=a.size();
    int m=b.size();

    for(int j = 0; j < m; j++){
        int temp=0;
        for(int i = 0; i < n; i++){
            if(a[i]>b[j]){
                temp = a[i];
                a[i]=b[j];
                b[j]=temp;
            }
        }
    }
    sort(b.begin(),b.end());
}

int main(){

    vector<long long> arr1={1,2,4,5,7,10};
    vector<long long> arr2={3,6,8,9};

    mergeTwoSortedArraysWithoutExtraSpace(arr1,arr2);

    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<arr2.size();j++){
        cout<<arr2[j]<<" ";
    }
return 0;
}