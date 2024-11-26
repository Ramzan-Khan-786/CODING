#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) return;
    decimalToBinary(n / 2);
    cout << (n % 2);
}

int main() {
    int roll_number;
    // cout << "Enter your roll number (decimal): ";
    cin >> roll_number;

    if (roll_number == 0) {
        cout << "Binary representation: 0" << endl;
    } else {
        cout << "Binary representation: ";
        decimalToBinary(roll_number);
        cout << endl;
    }
    
    return 0;
}
