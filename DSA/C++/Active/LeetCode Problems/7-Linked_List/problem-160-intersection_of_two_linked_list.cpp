// link: https://leetcode.com/problems/intersection-of-two-linked-lists/
// 160. Intersection of Two Linked Lists
#include <bits/stdc++.h>
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;

        ListNode *first = headA;
        ListNode *second = headB;

        while (first != second) {
            first = first ? first->next : headB;
            second = second ? second->next : headA;
        }

        return first;
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

    // Test Case: Intersection at node with value 8
    ListNode* headA = createList({4, 1, 8, 4, 5});
    ListNode* headB = createList({5, 0, 1});
    
    // Create intersection
    ListNode* intersection = headA->next->next;  // Node with value 8
    ListNode* tempB = headB;
    while (tempB->next) tempB = tempB->next;
    tempB->next = intersection;  // Make lists intersect

    ListNode* intersectionNode = sol.getIntersectionNode(headA, headB);
    if (intersectionNode) {
        cout << "Intersection at node with value: " << intersectionNode->val << endl;
    } else {
        cout << "No intersection" << endl;
    }

    freeList(headA);
    freeList(headB);
    return 0;
}
