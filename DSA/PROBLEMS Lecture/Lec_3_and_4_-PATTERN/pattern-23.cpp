#include<iostream>
using namespace std;
// PATERN 1
// 1 2 3 4 
//   1 2 3
//     1 2
//       1
int main(){

    int n=4;
    int i=1;

    while(i<=n){
        int star=1;
        int space=1;

        while(space<i){
            cout<<"  ";
            space=space+1;
        }

        while(star<=n-i+1){
            cout<<star<<" ";
            star=star+1;
        }
        cout<<endl;
        i++;
    }

return 0;
}