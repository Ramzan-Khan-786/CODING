#include<iostream>
using namespace std;
// PATTERN 1
//       1 
//     2 2
//   3 3 3
// 4 4 4 4

int main(){
    int n = 4;
    
    int i = 1;
    

    while(i<=n){
        int space = n-i;
        int star = 1;
        while(space>0){
            cout<<"  ";
            space=space-1;
        }
        while(star<=i){
            cout<<i<<" ";
            star=star+1;
        }
        cout<<endl;
        i=i+1;
    }

return 0; 
}