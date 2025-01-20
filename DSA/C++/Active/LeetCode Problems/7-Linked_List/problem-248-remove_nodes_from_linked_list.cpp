//link: https://leetcode.com/problems/remove-nodes-from-linked-list/
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Solution class
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        if (!head || !head->next) return head;

        head = reverseList(head);

        ListNode* curr = head;
        ListNode* maxNode = head;

        while (curr != NULL && curr->next != NULL) {
            if (curr->next->val < maxNode->val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
                maxNode = curr;
            }
        }

        return reverseList(head);
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

    // Test Case 1
    ListNode* head = createList({5, 2, 13, 3, 8});
    cout << "Original List: ";
    printList(head);
    ListNode* result = sol.removeNodes(head);
    cout << "Processed List: ";
    printList(result);
    freeList(result);

    // Test Case 2
    head = createList({10, 20, 30, 40, 50});
    cout << "Original List: ";
    printList(head);
    result = sol.removeNodes(head);
    cout << "Processed List: ";
    printList(result);
    freeList(result);

    // Test Case 3
    head = createList({50, 40, 30, 20, 10});
    cout << "Original List: ";
    printList(head);
    result = sol.removeNodes(head);
    cout << "Processed List: ";
    printList(result);
    freeList(result);

    return 0;
}
