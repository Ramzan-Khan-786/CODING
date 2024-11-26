#include<iostream>
using namespace std;

int main(){
int n = 108, ans = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            ans=ans+(i);
        }
    }
    if (ans > n)
    {
        cout << "abundant" << endl;
    }
    else
    {
        cout << "not abundant" << endl;
    }
    cout <<ans<<endl;
return 0;
}