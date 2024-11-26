#include <iostream>
#include <cmath>
using namespace std;
int toGetIndex(int num)
{
    int index = 0;
    while (num != 0)
    {
        num = num / 10;
        index++;
    }
    return index;
}
int main()
{
    int num = 193, val, base = 0, soln = 0, digit;
    val = num;
    digit = toGetIndex(val);
    num = val;
    while (num != 0)
    {
        base = num % 10;
        num = num / 10;
        soln = soln + pow(base, digit);
    }
    cout << soln << endl;
    if (val == soln)
    {
        cout << "armstrong Number" << endl;
    }
    else
    {
        cout << "Not armstrong number" << endl;
    }

    return 0;
}