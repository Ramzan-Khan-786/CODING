#include <iostream>
#include <bitset>
using namespace std;

int main() {
    
    int binaryNumber = 1010;

    
    bitset<32> bits(binaryNumber);

   
    unsigned long integerNumber = bits.to_ulong();

    cout << "The integer value of the binary number " << binaryNumber << " is " << integerNumber << "." << endl;

    return 0;
}