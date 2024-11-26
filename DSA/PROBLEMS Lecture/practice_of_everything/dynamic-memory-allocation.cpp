
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numRows, numCols;
    cin >> numRows >> numCols;

    int **matrix = new int*[numRows];
    for (int i = 0; i < numRows; i++) {
        matrix[i] = new int[numCols];
    }

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
