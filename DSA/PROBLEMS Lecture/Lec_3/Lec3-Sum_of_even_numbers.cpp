#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int sum = 0;
    int i = 2;

    while(i <= n){
        sum = sum + i;
        i = i + 2;
    }

    cout << " The sum of all even numbers between 1 to n is " << sum << endl;
return 0;
}