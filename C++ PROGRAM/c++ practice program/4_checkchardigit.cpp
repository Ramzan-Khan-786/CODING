#include <iostream>
using namespace std;

int main()
{
    char a ;
    cin>>a;
    if ((a >= 97 && a <= 122))
    {
        cout << "lower case";
    }
    else
    {
        if ((a >= 65 && a <= 90))
        {
            cout << "Uppercase";
        }
        else
        {
            if ((a >= 48 && a <= 57))
            {
                cout << "digit";
            }
            else
            {
                cout << "other characters";
            }
        }
    }
    return 0;
}