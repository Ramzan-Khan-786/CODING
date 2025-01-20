//link: https://leetcode.com/problems/delete-node-in-a-linked-list/
#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Solution class
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

// Helper Functions
ListNode* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void freeList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Main function for testing
int main() {
    Solution sol;

    // Test Case: Delete a node in the middle
    vector<int> values = {4, 5, 1, 9};
    ListNode* head = createList(values);
    cout << "Original List: ";
    printList(head);

    // Find the node with value 5 to delete
    ListNode* nodeToDelete = head->next; // The node with value 5
    sol.deleteNode(nodeToDelete);

    cout << "List after deleting node with value 5: ";
    printList(head);

    freeList(head);
    return 0;
}
