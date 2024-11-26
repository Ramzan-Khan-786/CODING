#include <iostream>
using namespace std;
int toFactoriat(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int numf = 1457, rem = 0, ans = 0;
    int nums=numf;
    while (nums > 0)
    {
        rem = nums % 10;
        nums = nums / 10;
        ans = ans + toFactoriat(rem);
    }
    if (ans == numf)
    {
        cout << "strong" << endl;
    }
    else
    {
        cout << "not strong" << endl;
    }
    cout <<ans<<endl;
    return 0;
}