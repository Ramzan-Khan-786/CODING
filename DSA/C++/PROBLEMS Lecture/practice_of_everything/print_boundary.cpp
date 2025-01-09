#include <bits/stdc++.h>
using namespace std;



int main() {
    cout <<endl << "Hello World" << endl;
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    cout<<"2D array is: "<<endl;
    for(int i = 0;i<4;i++){        
        for(int j = 0 ; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Boundary elements are: "<<endl;

    for(int i = 0;i<4;i++){        
        for(int j = 0 ; j<4;j++){
            if(i==0 || i==3 || j==0 || j==3){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    
    return 0;
}