#include <iostream>
using namespace std;
void toPrintTable(void)
{
    int m;
    cout << "Enter the number which you want to get the table:  ";
    cin >> m;
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << m << "x" << i << "=" << i * m << endl;
    }
};
int main()
{
    toPrintTable();
}