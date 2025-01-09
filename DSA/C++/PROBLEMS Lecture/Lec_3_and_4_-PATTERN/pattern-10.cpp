#include<iostream>
using namespace std;
        
        // PATTERN 1
        // 1 
        // 2 3 
        // 3 4 5
        // 4 5 6 7

int main(){
    
    int n=4;

    int i=1;


// ***method 1*************************

    // int count = 1;
    // while(i<=n){
    //     int j=i;
    //     count = i;
    //     while(j<=i){
    //         cout <<" "<<count;
    //         j = j + 1;
    //         count = count + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

// ***method 2(more optimal)*****************************

    
      while(i<=n){
          int j=0;
          while(j<i){
              cout <<" "<<i+j;
              j = j + 1;
           }
          cout<<endl;
          i = i + 1;
      }

return 0;
}