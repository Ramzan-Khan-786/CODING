// problem 84 - largest rectangle in histogram
// link : https://leetcode.com/problems/largest-rectangle-in-histogram/
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Function to find the next smaller element for each bar
    vector<int> nextSmallerElement(vector<int> arr, int n) {
        stack<int> s;
        s.push(-1); // A dummy element to handle edge cases
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();  // Pop elements that are greater than or equal to the current element
            }
            ans[i] = s.top();  // The next smaller element
            s.push(i);  // Push current element's index onto the stack
        }
        return ans;
    }

    // Function to find the previous smaller element for each bar
    vector<int> prevSmallerElement(vector<int> arr, int n) {
        stack<int> s;
        s.push(-1); // A dummy element to handle edge cases
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();  // Pop elements that are greater than or equal to the current element
            }
            ans[i] = s.top();  // The previous smaller element
            s.push(i);  // Push current element's index onto the stack
        }
        return ans;
    }

public:
    // Function to calculate the largest rectangle area in the histogram
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        // Find the next smaller element for each bar
        vector<int> next(n);
        next = nextSmallerElement(heights, n);

        // Find the previous smaller element for each bar
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int area = INT_MIN;  // Initialize the maximum area to a very small number

        for (int i = 0; i < n; i++) {
            int l = heights[i];  // The height of the bar

            // If no next smaller element, consider the rightmost boundary (n)
            if (next[i] == -1) {
                next[i] = n;
            }

            // Calculate the width of the rectangle
            int b = next[i] - prev[i] - 1;

            // Calculate the area of the rectangle
            int newArea = l * b;
            area = max(area, newArea);  // Update the maximum area
        }
        return area;
    }
};

// Test the Solution
int main() {
    Solution sol;

    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Largest rectangle area: " << sol.largestRectangleArea(heights) << endl;

    return 0;
}
