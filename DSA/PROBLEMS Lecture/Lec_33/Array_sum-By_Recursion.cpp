#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int size) {
    // Base case
    if(size == 0) {
        return 0; // If no elements, sum is 0
    }
    
    // Recursive case: sum of the first element and the rest
    return arr[0] + sum(arr + 1, size - 1);
}

int main() {
    cout << endl << "Hello World" << endl;
    
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int ans = sum(arr, size);

    cout << ans << endl; // Output the sum

    return 0;
}
