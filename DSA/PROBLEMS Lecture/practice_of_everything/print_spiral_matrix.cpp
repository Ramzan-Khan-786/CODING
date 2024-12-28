#include <bits/stdc++.h>
using namespace std;

int main() {
    cout <<endl << "Hello World" << endl;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout<<"2D array is: "<<endl;
    for(int i = 0;i<3;i++){
        for(int j = 0 ; j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Spiral matrix is: "<<endl;
    for(int i = 0;i<3;i++){     
        for(int j = 0 ; j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}