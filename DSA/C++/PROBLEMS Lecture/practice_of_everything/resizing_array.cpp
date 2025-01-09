#include <bits/stdc++.h>
using namespace std;



int main() {
    cout <<endl << "Hello World" << endl;

    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout << "array element is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Sum of array element is: "<<sum<<endl;

    int *newa=new int[2*n];

    for(int i=0;i<n;i++){
        newa[i]=a[i];
    }
    for(int i=n;i<2*n;i++){
        newa[i]=0;
    }
    cout<<"new array is: "<<endl;
    for(int i=0;i<2*n;i++){
        cout<<newa[i]<<" ";
    }

    delete []a;
    delete []newa;
    
    return 0;
}