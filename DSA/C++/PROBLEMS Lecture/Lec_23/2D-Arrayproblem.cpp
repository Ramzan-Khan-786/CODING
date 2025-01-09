#include <bits/stdc++.h>
using namespace std;



int main() {
    cout << "Hello World" << endl;

    vector<vector<int>> arr(5, vector<int>(5));


    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}