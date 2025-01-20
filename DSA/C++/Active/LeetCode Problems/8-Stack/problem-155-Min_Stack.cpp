// 155. Min Stack
// https://leetcode.com/problems/min-stack
#include <iostream>
#include <stack>
#include <climits>
using namespace std;

// MinStack class implementation
class MinStack {
private:
    stack<long long> s;
    long long mini;

public:
    MinStack() { mini = LLONG_MAX; }

    void push(int val) {
        if (s.empty()) {
            s.push((long long)val);
            mini = val;
        } else {
            if (val < mini) {
                s.push(2LL * val - mini);
                mini = val;
            } else {
                s.push((long long)val);
            }
        }
    }

    void pop() {
        if (!s.empty()) {
            long long curr = s.top();
            s.pop();
            if (curr < mini) {
                mini = 2LL * mini - curr;
            }
        }
    }

    int top() {
        if (s.empty())
            return -1;
        long long curr = s.top();
        return (curr < mini) ? (int)mini : (int)curr;
    }

    int getMin() { return (int)mini; }
};

int main() {
    MinStack minStack;

    // Test push
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);

    cout << "Minimum element: " << minStack.getMin() << endl; // Output: -3

    // Test pop
    minStack.pop();
    cout << "Top element: " << minStack.top() << endl;        // Output: 0
    cout << "Minimum element: " << minStack.getMin() << endl; // Output: -2

    // Test push and getMin
    minStack.push(-1);
    cout << "Top element: " << minStack.top() << endl;        // Output: -1
    cout << "Minimum element: " << minStack.getMin() << endl; // Output: -2

    return 0;
}
