// problem-24-swap_node_pairs.cpp
// Swap Nodes in Pairs
// Problem Link: https://leetcode.com/problems/swap-nodes-in-pairs/
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Solution class
class Solution {
private:
    ListNode* solve(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* first = head;
        ListNode* second = head->next;

        first->next = solve(second->next);
        second->next = first;

        return second;
    }
public:
    ListNode* swapPairs(ListNode* head) {
        return solve(head);
    }
};

// Helper functions
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* createList(vector<int> vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;
    for (int i = 1; i < vals.size(); i++) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }
    return head;
}

void freeList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Main function
int main() {
    Solution sol;

    // Test Case 1
    vector<int> vals1 = {1, 2, 3, 4};
    ListNode* head1 = createList(vals1);
    cout << "Original List: ";
    printList(head1);
    ListNode* result1 = sol.swapPairs(head1);
    cout << "Swapped Pairs List: ";
    printList(result1);
    freeList(result1);

    // Test Case 2
    vector<int> vals2 = {1, 2, 3};
    ListNode* head2 = createList(vals2);
    cout << "Original List: ";
    printList(head2);
    ListNode* result2 = sol.swapPairs(head2);
    cout << "Swapped Pairs List: ";
    printList(result2);
    freeList(result2);

    return 0;
}

