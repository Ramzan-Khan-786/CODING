// https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307
#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	int i=1;
	
	while(i<arr.size()){
		if(arr[i]==arr[i-1]){
			arr.erase(arr.begin()+i);
		}
		else if(arr[i]!=arr[i-1]){
			i++;
		}
	}
	return arr.size();
}

int main() {
    vector<int> arr={1,1,2,3,3,3,4,5,5,6,9,9};
    cout << "HELLO WORLD" << endl;

    cout<<"Output before removing elements"<<endl;

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    removeDuplicates(arr,arr.size());

    cout<<endl<<"Output after removing elements"<<endl;

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}