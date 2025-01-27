// link: https://leetcode.com/problems/search-a-2d-matrix/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    bool solve(vector<int>& arr, int size, int key) {
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start) / 2;

        while (start <= end) {
            if (arr[mid] == key) {
                return true;
            }
            if (key > arr[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for (int i = 0; i < row; i++) {
            if (target == matrix[i][0] || target == matrix[i][col - 1]) {
                return true;
            }
            if (target > matrix[i][0] && target < matrix[i][col - 1]) {
                return solve(matrix[i], col, target);
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target1 = 16;
    int target2 = 25;

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
