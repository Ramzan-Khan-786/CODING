#include <iostream>
using namespace std;
// PATTERN 1
// ____1____
// ___121___
// __12321__
// _1234321_
int main()
{

    int n = 4;
    int i = 1;

    while (i <= n)
    {

        int space_1 = n - i + 1;
        while (space_1 > 0)
        {
            cout << "   ";
            space_1 = space_1 - 1;
        }

        int num = 1;
        int j = 1;
        while (j <= (2 * i - 1))
        {
            cout <<" "<< num <<" ";
            if (j < i)
            {
                num++;
            }
            else
            {
                num--;
            }
            j++;
        }

        int space_2 = n - i + 1;
        while (space_2 > 0)
        {
            cout << "  ";
            space_2 = space_2 - 1;
        }
        cout << endl;
        i++;
    }
    return 0;
}