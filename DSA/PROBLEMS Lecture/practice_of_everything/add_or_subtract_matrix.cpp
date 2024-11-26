#include <bits/stdc++.h>
using namespace std;



int main() {
    cout <<endl << "Hello World" << endl;
    int arr1[3][3];
    int arr2[3][3];
    int add[3][3];
    int sub[3][3];
    
    cout<<"Enter matrix 1"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter matrix 2"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"Matrix 1"<<endl; 
    for (int i = 0 ; i < 3 ;i++){   
        for(int  j = 0 ; j<3 ;j++){
            cout<<" " <<arr1[i][j];
        }
        cout << endl;
    }

    cout<<"Matrix 2"<<endl;
    for (int i = 0 ; i < 3 ;i++){
        for(int  j = 0 ; j<3 ;j++){
            cout<<" " <<arr2[i][j];
        }
        cout << endl;
    }


    cout<<"Addition of matrix"<<endl;
    for(int i=0;i<3;i++){
        for (int  j = 0; j < 3; j++){
            add[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for (int i = 0 ; i < 3 ;i++){
        for(int  j = 0 ; j<3 ;j++){
            cout<<" " <<add[i][j];
        }
        cout << endl;
    }
    cout<<"Subtraction of matrix"<<endl;
    for(int i=0;i<3;i++){
        for (int  j = 0; j < 3; j++){
            sub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    for (int i = 0 ; i < 3 ;i++){
        for(int  j = 0 ; j<3 ;j++){
            cout<<" " <<sub[i][j];
        }
        cout << endl;
    }

    cout<<"Transpose of matrix 2"<<endl;
    int transpose[3][3];
    for (int i = 0 ; i < 3 ;i++){
        for(int  j = 0 ; j<3 ;j++){
            transpose[i][j]=arr2[j][i];
        }
        
    } 

    for (int i = 0 ; i < 3 ;i++){
        for(int  j = 0 ; j<3 ;j++){
            cout<<" " <<transpose[i][j];
        }
        cout << endl;
    }  

    return 0;
}