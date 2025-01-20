// https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246
#include <bits/stdc++.h>
using namespace std;

// Recursive function to delete the middle element
void solve(stack<int>& inputStack, int count, int size) {
    // Base case: When we reach the middle, remove the element
    if (count == size / 2) {
        inputStack.pop();
        return;
    }
    
    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack, count + 1, size);

    // Push the element back after the middle element is removed
    inputStack.push(num);
}

// Function to delete the middle element of the stack
void deleteMiddle(stack<int>& inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
}

// Test the deleteMiddle function
int main() {
    stack<int> inputStack;

    // Example: Push elements onto the stack
    inputStack.push(1);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5); // Stack is now {1, 2, 3, 4, 5}

    int size = inputStack.size();

    cout << "Original Stack (from top to bottom): ";
    stack<int> temp = inputStack;
    vector<int> tempVec;
    while (!temp.empty()) {
        tempVec.push_back(temp.top());
        temp.pop();
    }
    reverse(tempVec.begin(), tempVec.end());
    for (int num : tempVec) {
        cout << num << " ";
    }
    cout << endl;

    // Delete the middle element
    deleteMiddle(inputStack, size);

    // Print the stack after deleting the middle element
    cout << "Stack After Deleting Middle Element (from top to bottom): ";
    temp = inputStack;
    tempVec.clear();
    while (!temp.empty()) {
        tempVec.push_back(temp.top());
        temp.pop();
    }
    reverse(tempVec.begin(), tempVec.end());
    for (int num : tempVec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
