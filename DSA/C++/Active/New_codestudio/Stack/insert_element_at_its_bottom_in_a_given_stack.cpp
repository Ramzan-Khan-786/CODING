// https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>& s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();

    solve(s, x);

    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) {
    solve(myStack, x);
    return myStack;
}

void printStack(stack<int> stack) {
    vector<int> elements;
    while (!stack.empty()) {
        elements.push_back(stack.top());
        stack.pop();
    }
    reverse(elements.begin(), elements.end());
    for (int el : elements) {
        cout << el << " ";
    }
    cout << endl;
}

int main() {
    // Test case
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    cout << "Original stack: ";
    printStack(myStack);

    int x = 5; // Element to push at the bottom
    myStack = pushAtBottom(myStack, x);

    cout << "Stack after pushing " << x << " at the bottom: ";
    printStack(myStack);

    return 0;
}
