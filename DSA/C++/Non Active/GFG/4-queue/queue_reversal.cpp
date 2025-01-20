// https://www.geeksforgeeks.org/problems/queue-reversal/1
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
    queue<int> reverseQueue(queue<int> &q) {
        stack<int> s;
        while (!q.empty()) {
            int element = q.front();
            q.pop();
            s.push(element);
        }
        while (!s.empty()) {
            int element = s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
};

int main() {
    Solution solution;
    queue<int> q;

    // Insert elements into the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Reverse the queue
    queue<int> reversedQueue = solution.reverseQueue(q);

    // Print the reversed queue
    cout << "Reversed Queue: ";
    while (!reversedQueue.empty()) {
        cout << reversedQueue.front() << " ";
        reversedQueue.pop();
    }
    return 0;
}
