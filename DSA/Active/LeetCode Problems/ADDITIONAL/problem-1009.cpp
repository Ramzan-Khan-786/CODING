#include<iostream>
#include<bitset>

class Solution {
public:
    int bitwiseComplement(int n) {
       
        int m = n;
        int mask = 0;

        if(n==0){
            return 1;
        }

        while (m != 0) {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
       
       
        int ans = (~n) & mask;

        return ans;
    }
};

using namespace std;

int main(){
    int n=0;
    Solution first;
    cout<<first.bitwiseComplement(n);

return 0;
}