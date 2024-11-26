#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a = 88;
    if (a == 0 || a == 1)
    {
        cout << "neither prime nor composite";
    }
    else if (a == 2)
    {
        cout << "prime number";
    }
    else if (a % 2 == 0 && a != 2)
    {
        cout << "not a prime number";
    }
    else
    {
        int sq = sqrt(a);
        bool isPrime = true;
        for (int i = 3; i <= sq; i += 2)
        {
            if (a % i != 0)
            {
                isPrime = true;
                break;
            }
        }
        if (isPrime)
        {
            cout << "prime number";
        }
        else
        {
            cout << "not a prime number";
        }
    }
    return 0;
}