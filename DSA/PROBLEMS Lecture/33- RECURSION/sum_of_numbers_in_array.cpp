#include <bits/stdc++.h>
using namespace std;

int ansSum(int s[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return s[0];
    }
    
    return s[size]+ansSum(s,size-1);
}

int main() {
    cout <<endl << "Hello World" << endl;
    int s[3]={1,2,3};
    int sum=0;
    cout<< ansSum(s,2);
    return 0;
}