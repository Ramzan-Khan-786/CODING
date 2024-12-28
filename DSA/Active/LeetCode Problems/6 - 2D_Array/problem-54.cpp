// URL: https://leetcode.com/problems/spiral-matrix/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> arrans;


        if(matrix.empty()) return arrans;

        int row = matrix.size();
        int col = matrix[0].size();
        int total = row * col ;
        int count = 0;

        int startrow = 0;
        int startcol = 0;
        int endrow = row - 1;
        int endcol = col - 1;

   
        while(count < total){

            
            for(int index = startcol; count < total && index <= endcol; index++){
                arrans.push_back(matrix[startrow][index]);
                count++;
            }
            startrow++; 


            for(int index = startrow; count < total && index <= endrow; index++){
                arrans.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;  


            for(int index = endcol; count < total && index >= startcol; index--){
                arrans.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;

            
            for(int index = endrow; count < total && index >= startrow; index--){
                arrans.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
        }
        return arrans;
    }
};

int main() {
    cout << "Hello World" << endl;
    
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

   
    vector<int> result = sol.spiralOrder(matrix);

    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}