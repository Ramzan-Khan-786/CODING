// https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875
#include <bits/stdc++.h>
using namespace std;

void insertatBottom(stack<int> &s, int element) {
    if (s.empty()) {
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    insertatBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack) {
    if (stack.empty()) {
        return;
    }
    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertatBottom(stack, num);
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
    stack<int> testStack;
    testStack.push(1);
    testStack.push(2);
    testStack.push(3);
    testStack.push(4);
    testStack.push(5);

    cout << "Original stack: ";
    printStack(testStack);

    reverseStack(testStack);

    cout << "Reversed stack: ";
    printStack(testStack);

    return 0;
}
