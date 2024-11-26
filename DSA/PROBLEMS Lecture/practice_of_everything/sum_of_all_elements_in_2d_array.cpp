#include <bits/stdc++.h>
using namespace std;

int sum(int arr[3][3],int row,int col) {
    int sum=0;
    for(int i = 0;i<row;i++){
        for(int j = 0 ; j<col;j++){

            sum=sum+arr[i][j];
        }
    }

return sum;
}
void rowcolSum(int arr[3][3],int row,int col) {
    int sum=0;
    for(int i = 0;i<row;i++){
        for(int j = 0 ; j<col;j++){           

            sum=sum+arr[i][j];            
        }
        cout<<"Sum of row "<<i<<" is "<<sum<<endl;
        sum=0;
    }
    for(int i = 0;i<row;i++){
        for(int j = 0 ; j<col;j++){           

            sum=sum+arr[j][i];            
        }
        cout<<"Sum of col "<<i<<" is "<<sum<<endl;
        sum=0;
    }
}

int main() {
    cout <<endl << "Hello World" << endl;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 0;i<3;i++){
        for(int j = 0 ; j<3;j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of all elements in 2D array is "<< sum(arr,3,3) << endl;
    rowcolSum(arr,3,3);
    return 0;
}
