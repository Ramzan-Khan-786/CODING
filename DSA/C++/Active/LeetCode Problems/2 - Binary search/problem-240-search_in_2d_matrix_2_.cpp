// link: https://leetcode.com/problems/search-a-2d-matrix-ii/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }

        int row = 0;
        int col = matrix[0].size() - 1;
        while (row < matrix.size() && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            }
            if (matrix[row][col] > target) {
                col--; 
            } else {
                row++; 
            }
        }
        return false; 
    }
};

int main() {
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int target1 = 5;
    int target2 = 15;

    cout << "Testing with target = " << target1 << ":" << endl;
    if (sol.searchMatrix(matrix, target1)) {
        cout << "Target found in the matrix!" << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    cout << "\nTesting with target = " << target2 << ":" << endl;
    if (sol.searchMatrix(matrix, target2)) {
        cout << "Target found in the matrix!" << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
