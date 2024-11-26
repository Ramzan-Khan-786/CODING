// https://www.naukri.com/code360/problems/pascal-s-triangle_1089580
#include <bits/stdc++.h>
using namespace std;

long long int pascalValue(int row, int col) {
    if (col == 0 || col == row) {
        return 1;
    }
    return pascalValue(row - 1, col - 1) + pascalValue(row - 1, col);
}

vector<vector<long long int>> printPascal(int n) {
    vector<vector<long long int>> pascal(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            pascal[i].push_back(pascalValue(i, j));
        }
    }

    return pascal;
}


int main() {
    cout <<endl << "Pascal's Triangle Using Recursion" << endl;
    vector<vector<long long int>> ans=printPascal(5);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {   
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}