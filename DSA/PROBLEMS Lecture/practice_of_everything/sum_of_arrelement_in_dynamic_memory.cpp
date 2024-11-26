
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numRows, numCols;
    cin >> numRows >> numCols;
    int avg=0;
    int sum= 0;
    int total_elements=numRows*numCols;
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
        for (int j = 0; j < numCols; j++) {            
            sum = sum + matrix[i][j];
        }
    }

    cout << "Sum of all elements in 2D array is " << sum << endl;
    cout << "Average of all elements in 2D array is " << sum / total_elements << endl;
    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
