//link: https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1


#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    bool isSafe(int x, int y, vector<vector<int>> &visited, vector<vector<int>> &maze) {
        return (x >= 0 && x < maze.size() && y >= 0 && y < maze[0].size() &&
                !visited[x][y] && maze[x][y] == 1);
    }
  
    void solve(vector<vector<int>> &maze, int n, vector<string> &paths, int x, int y, vector<vector<int>> &visited, string path) {
        if (x == n - 1 && y == n - 1) {
            paths.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        // Move down
        if (isSafe(x + 1, y, visited, maze)) {
            solve(maze, n, paths, x + 1, y, visited, path + 'D');
        }
        
        // Move left
        if (isSafe(x, y - 1, visited, maze)) {
            solve(maze, n, paths, x, y - 1, visited, path + 'L');
        }
        
        // Move right
        if (isSafe(x, y + 1, visited, maze)) {
            solve(maze, n, paths, x, y + 1, visited, path + 'R');
        }
        
        // Move up
        if (isSafe(x - 1, y, visited, maze)) {
            solve(maze, n, paths, x - 1, y, visited, path + 'U');
        }
        
        visited[x][y] = 0; // Backtracking
    }

  public:
    vector<string> findPath(vector<vector<int>> &maze) {
        vector<string> ans;
        int n = maze.size();
        
        if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) {
            return ans;
        }
        
        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";
        solve(maze, n, ans, 0, 0, visited, path);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution obj;
    vector<vector<int>> maze = {
        {1, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 1, 0},
        {0, 1, 1, 1}
    };

    vector<string> result = obj.findPath(maze);
    if (result.empty()) {
        cout << "No path found" << endl;
    } else {
        for (const auto &path : result) {
            cout << path << endl;
        }
    }

    return 0;
}
