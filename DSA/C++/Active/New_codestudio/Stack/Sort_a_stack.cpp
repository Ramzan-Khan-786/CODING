// https://www.naukri.com/code360/problems/sort-a-stack_985275
#include <bits/stdc++.h> 
using namespace std;

void sortedInsert(stack<int> &stack, int num) {
    if (stack.empty() || (!stack.empty() && stack.top() < num)) {
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();

    sortedInsert(stack, num);

    stack.push(n);
}

void sortStack(stack<int> &stack) {
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    sortStack(stack);

    sortedInsert(stack, num);
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
    testStack.push(3);
    testStack.push(1);
    testStack.push(4);
    testStack.push(2);
    testStack.push(5);

    cout << "Original stack: ";
    printStack(testStack);

    sortStack(testStack);

    cout << "Sorted stack: ";
    printStack(testStack);

    return 0;
}
