#include <bits/stdc++.h>
using namespace std;

string reverseString(string s, int size) {
    if (size < 0) {  // Base case
        return "";
    }
    return s[size] + reverseString(s, size - 1); // Move backwards through the string
}

int main() {
    cout << endl << "Hello World" << endl;
    string s = "Ramzanam";

    cout << reverseString(s, s.size() - 1);  // Pass the correct size (length - 1)
    return 0;
}
