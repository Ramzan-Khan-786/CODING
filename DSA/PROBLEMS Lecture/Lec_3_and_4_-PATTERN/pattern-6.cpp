#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
        
        // PATTERN 1
        //  1 2 3
        //  4 5 6 
        //  7 8 9
int main(){
    int n=3;

    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout <<" "<<count;
            j = j + 1;
            count=count+1;
        }
        cout<<endl;
        i  =  i  + 1;
    }
return 0;
}