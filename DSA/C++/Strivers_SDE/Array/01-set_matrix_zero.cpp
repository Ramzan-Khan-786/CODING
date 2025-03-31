#include <bits/stdc++.h>
using namespace std;
void printMatrix(vector<vector<int>>& matrix, int m, int n) {
    for (int  i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
   
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}


void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    
    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}
vector<vector<int>> solve(vector<vector<int>> &matrix, int n, int m) {

    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int m = matrix.size();
    int n = matrix[0].size();
    cout<<"Original Matrix"<<endl;
    printMatrix(matrix,m,n);
    solve( matrix,m,n);
    cout<<"Modified Matrix"<<endl;
    printMatrix(matrix,m,n);
    return 0;
}