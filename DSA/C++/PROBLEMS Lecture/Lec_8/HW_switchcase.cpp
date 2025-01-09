#include <iostream>
using namespace std;

int main() {
    int amount = 1330;
    int num100, num50, num20, num1;
    
    switch (1) {
        case 1:
            num100 = amount / 100;
            amount %= 100;
            
        
        case 2:
            num50 = amount / 50;
            amount %= 50;
            
        
        case 3:
            num20 = amount / 20;
            amount %= 20;
         
        
        case 4:
            num1 = amount;
            break;
        
        default:
            cout << "Invalid amount" << endl;
            return 1;
    }
    
    cout << "Number of 100 rupee notes: " << num100 << endl;
    cout << "Number of 50 rupee notes: " << num50 << endl;
    cout << "Number of 20 rupee notes: " << num20 << endl;
    cout << "Number of 1 rupee notes: " << num1 << endl;
    
    return 0;
}