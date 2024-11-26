#include <bits/stdc++.h>
using namespace std;

bool isSort(int s[],int size){
    if(size==0)
    return true;
    
    if(s[size]<s[size-1])
    return false;

    else
    isSort(s,size-1);

}

int main() {
    cout <<endl << "Hello World" << endl;
    int s[4]={1,2,99,400};
    cout<<isSort(s,3);
    return 0;
}