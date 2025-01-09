// https://www.naukri.com/code360/problems/allocate-books_1090540
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool isPossible(vector<int> &pages, int n, int b, int mid){
	int ninjacount=1;
	int pagesum=0;

	for(int i=0;i<n;i++){
		if(pages[i]+pagesum <= mid){
			pagesum+=pages[i];
		}
		else{
			ninjacount++;
			if(ninjacount>b || pages[i]>mid){
				return false;
			}
			pagesum=pages[i];
		}
	}
	return true;
}

int findPages(vector<int> &pages, int n, int b)
{
	int s=0;
	int sum=0;

	int ans=-1;

	if(n<b){
		return -1;
	}
	for(int i  = 0 ; i <= n;i++){
		sum+=pages[i];
	}

	int e=sum;

	while(s<=e){
		int mid=s+(e-s)/2;
		if(isPossible(pages,n,b,mid)){
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

vector<int> arr={2,3,4,2,3,2} ;

    cout<<findPages(arr,8,4);

return 0;
}