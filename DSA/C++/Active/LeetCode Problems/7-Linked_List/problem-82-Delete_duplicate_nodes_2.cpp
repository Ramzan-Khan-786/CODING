//problem -82 - remove duplicates from sorted list
// link- https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Solution class
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        while (head != NULL) {
            if (head->next != NULL && head->val == head->next->val) {
                while (head->next != NULL && head->val == head->next->val) {
                    head = head->next;
                }
                prev->next = head->next;
            } else {
                prev = prev->next;
            }
            head = head->next;
        }
        return dummy->next;
    }
};

// Helper functions to create and display linked lists
ListNode* createLinkedList(vector<int> values) {
    if (values.empty()) return NULL;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (int i = 1; i < values.size(); i++) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

void printLinkedList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Solution solution;

    // Test case
    vector<int> values = {1, 2, 3, 3, 4, 4, 5};
    ListNode* head = createLinkedList(values);

    cout << "Original Linked List:" << endl;
    printLinkedList(head);

    ListNode* result = solution.deleteDuplicates(head);

    cout << "Linked List after removing duplicates:" << endl;
    printLinkedList(result);

    return 0;
}
