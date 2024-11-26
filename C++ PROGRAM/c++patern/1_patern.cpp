#include<iostream>
using namespace std;

int main(){
    int count=0;
    for(int i=0;i<=10;i++){
        if(count<=i/2){
            for(int j=0;j<=count;j++){
                cout<<j<<" ";
            }
            count++;
        }
        else if(count>i/2 && count <i){
            for(int j=0;j<=count;j++){
                cout<<j<<" ";
            }
        }
      cout<<endl;
    }
return 0;
}