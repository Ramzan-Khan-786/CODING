// Problem Link: https://leetcode.com/problems/reverse-nodes-in-k-group/
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
 
class Solution {
public:
    int getLength(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            size++;
        }
        return size;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL) {
            return NULL;
        }

        ListNode* prev = NULL;
        ListNode* curent = head;
        ListNode* forward = NULL;

        int cnt = 0;
        while (curent != NULL && cnt < k) {
            forward = curent->next;
            curent->next = prev;
            prev = curent;
            curent = forward;
            cnt++;
        }

        if (forward != NULL) {
            if (getLength(forward) >= k) {
                head->next = reverseKGroup(forward, k);
            } else {
                head->next = forward;
            }
        }

        return prev;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Helper function to create a linked list from a vector
ListNode* createList(vector<int>& values) {
    if (values.empty()) return NULL;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (int i = 1; i < values.size(); i++) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

int main() {
    Solution solution;

    // Example linked list: 1 -> 2 -> 3 -> 4 -> 5
    vector<int> values = {1, 2, 3, 4, 5};
    ListNode* head = createList(values);

    cout << "Original List: ";
    printList(head);

    int k = 3;
    ListNode* result = solution.reverseKGroup(head, k);

    cout << "Reversed in k-group (k=" << k << "): ";
    printList(result);

    return 0;
}
