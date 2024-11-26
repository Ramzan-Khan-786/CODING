#include<iostream>
using namespace std;
// PATERN 1
// 1 1 1 1 
//   2 2 2
//     3 3
//       4
int main(){

    int n=4;
    int i=1;

    while(i<=n){
        int space=1;
        int star=n+1-i;

        while(space<i){
            cout <<"  ";
            space=space+1;
        }

        while(star>0){
            cout<<i<<" ";
            star=star-1;
        }
        
        cout<<endl;
        i=i+1;
    }
return 0;
}