#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int nPr(int n, int r) {
    if (r > n)
        return 0;
    return factorial(n) / factorial(n - r);
}

int nCr(int n, int r) {
    if (r > n)
        return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter value for n: "<<endl;
    cin >> n;
    cout << "Enter value for r: "<<endl;
    cin >> r;

    if (r > n) {
        cout << "Error: r cannot be greater than n." << endl;
    } else {
        cout << "nPr (" << n << "P" << r << ") = " << nPr(n, r) << endl;
        cout << "nCr (" << n << "C" << r << ") = " << nCr(n, r) << endl;
    }

    return 0;
}
