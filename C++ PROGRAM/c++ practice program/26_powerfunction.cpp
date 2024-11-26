#include<iostream>
using namespace std;
double myPow(double base, int exponent) {
    double result = 1;
    
    
    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }
    
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}
int main(){
int base=-2,expo=3;
cout <<myPow(base,expo);
return 0;
}