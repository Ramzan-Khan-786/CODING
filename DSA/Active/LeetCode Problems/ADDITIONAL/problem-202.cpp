#include<iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    bool isHappy(int num) {
        
        if (num == 1 || num == 7)
        {
            return true;
        }
        int ncopy = num;
        int sqsum;

        while (ncopy != 1 && ncopy != 4) // 4 is a known non-happy number loop
        {
            sqsum = 0;
            while (ncopy != 0)
            {
                sqsum += pow((ncopy % 10), 2);
                ncopy /= 10;
            }
            ncopy = sqsum;
        }
        return ncopy == 1;
    }
};
int main()
{
    int n = 13;

    Solution first;
    cout << first.sqsum(n);

    return 0;
}