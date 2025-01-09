#include <bits/stdc++.h>
using namespace std;



int main() {
    cout << "Hello World" << endl;
   
    int size;
    cin>>size;
    int  arr[size];
    

    for(int i = 0 ; i < size ; i++ ){
        cin>>arr[i];
    }

    for(int i = 0 ; i < size ; i++ ){
        cout<<arr[i]<<" ---> ";
        cout<<&arr[i]<<endl;
    }

    int* add = arr;
    cout<<add+4;
    return 0;
}