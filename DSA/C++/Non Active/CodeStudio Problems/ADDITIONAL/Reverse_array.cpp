// https://www.naukri.com/code360/problems/reverse-the-array_1262298
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void reverseArray(vector<int> &arr , int m) {
    
    int s=m+1;
    int e=arr.size()-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
vector<int> arr={3,2,1,8,7,6,5,4};

cout<<"*************************************"<<endl;
for(int i = 0; i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
reverseArray(arr,2);

cout<<"*************************************"<<endl;
for(int i = 0; i<arr.size();i++){
    cout<<arr[i]<<" ";
}
return 0;
}