#include <iostream>
#include <vector>
using namespace std;

int substitution_Value(int i, int j) {
    if(i==1 || i==2){
        return 1;
    }
    if(i>2){
        return substitution_Value(i-1, j) + substitution_Value(i-2, j);
    }

}

void addRow(vector<vector<long long int>>& arr, int i) {
    vector<long long int> row;
    
    for (int j = 0; j < i; j++) {
        row.push_back(substitution_Value(i, j));
    }
    arr.push_back(row);
}

void printMatrix(const vector<vector<long long int>>& arr) {
    cout << "The 2D vector is:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << "Row " << i + 1 << " -> ";
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 5;
    vector<vector<long long int>> arr;

    for (int i = 1; i <= rows; i++) {
        
        addRow(arr, i);
    }

    printMatrix(arr);

    return 0;
}
