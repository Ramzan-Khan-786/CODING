#include<iostream>
using namespace std;

int main(){

    int n = cin.get();

    int sum = 0;
    int i = 1;


    while(i<=n){
        sum = sum + i;
        i++;
    }
    
    cout << "The sum of n natural number is " << sum << endl;
return 0;
}