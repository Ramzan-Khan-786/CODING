// https://www.naukri.com/code360/problems/sum-of-max-and-min_1081476
#include<iostream>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

// ****** Most optimal solution ******
int sumOfMaxMin(int arr[], int n){
	int mx=*max_element(arr,arr+n);
	int mn=*min_element(arr,arr+n);

	return mx+mn;
}

// ****** by sorting *******

// int sumOfMaxMin(int arr[], int n){
// 	sort(arr,arr+n);

// 	return arr[0]+arr[n-1];
// }

int main(){
int arr[8]={3,4,5,6,7,67,5,4};

cout<<sumOfMaxMin(arr,8);

return 0;
}