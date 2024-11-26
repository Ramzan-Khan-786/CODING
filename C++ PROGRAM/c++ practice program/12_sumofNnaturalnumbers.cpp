#include <iostream>
using namespace std;
 int toGetsum(int b){
    if(b==0)
    return b;
    return b+toGetsum(b-1);
 }
int main()
{
    int n = 45;

    // ********* loop *********
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        a = a + i;
    }
    cout << a << endl;


    // ********** formula method ***********
    cout << ((n * (n + 1)) / 2) << endl;


    // ********** by usng recursion ************
    cout <<toGetsum(n);
    
    return 0;
}