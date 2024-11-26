#include <iostream>
using namespace std;

int main()
{
    int n = 28, ans = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            ans=ans+(i);
        }
    }
    if (ans == n)
    {
        cout << "perfect" << endl;
    }
    else
    {
        cout << "not perfect" << endl;
    }
    cout <<ans<<endl;
    return 0;
}