#include <bits/stdc++.h>
using namespace std;

// Flatten, sort, and reconstruct a 2D vector
void fullsort(vector<vector<int>> &arr) {
    int rows = arr.size();
    int cols = arr[0].size();

    // Flatten the 2D vector into a 1D vector
    vector<int> flatArray;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flatArray.push_back(arr[i][j]);
        }
    }

    // Sort the 1D vector
    sort(flatArray.begin(), flatArray.end());

    // Reconstruct the 2D vector
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = flatArray[index++];
        }
    }
}

int main() {
    vector<vector<int>> arr = {{111, 24, 3}, {2, 53, 66}, {7, 84, 9}};
    
    cout << "The 2D vector before sorting is:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    fullsort(arr);

    cout << "The 2D vector after sorting is:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
