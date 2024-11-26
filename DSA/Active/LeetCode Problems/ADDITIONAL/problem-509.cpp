#include<iostream>
using namespace std;

class Solution {
    public:
    int fib(int n) {
        
    int a = 0, b = 1;
    int nextterm;

    if (n == 0)
    {
        return a;
    }
    if (n < 2){
        return b;
    }
    for (int i = 2; i <= n; i++)
    {
        nextterm = a + b;
        a = b;
        b = nextterm;
    }
    return nextterm;
    }
};

int main(){

    Solution first;
    cout << first.fib(4);

return 0;
}