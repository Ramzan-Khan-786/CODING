// https://www.naukri.com/code360/problems/interview-shuriken-41-move-zeroes-to-end_240143
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void pushZerosAtEnd(vector<int> &arr) 
{
	int i=0;
	
	for(int j=0;j<arr.size();j++){
		if(arr[j]!=0){
			swap(arr[j],arr[i]);
			i++;
		}
	}
}

int main(){
    vector<int> arr={2,0,4,40,0,5,0,0,22,2};
    pushZerosAtEnd(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
return 0;
}