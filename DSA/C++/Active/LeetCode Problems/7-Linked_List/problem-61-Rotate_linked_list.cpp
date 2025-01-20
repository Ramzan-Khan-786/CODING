// Rotate Linked List
// leetcode.com/problems/rotate-list/
#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Solution class with rotateRight method
class Solution {
private:
    int listsize(ListNode* head) {
        int size = 0;
        while (head != NULL) {
            size += 1;
            head = head->next;
        }
        return size;
    }

public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) {
            return head;
        }

        int size = listsize(head);
        k = k % size;

        if (k == 0) {
            return head;
        }

        int kplace = size - k;
        ListNode* first = head;
        ListNode* last = head;

        while (last->next != NULL) {
            last = last->next;
        }

        for (int i = 1; i < kplace; i++) {
            first = first->next;
        }

        ListNode* newHead = first->next;
        first->next = NULL;
        last->next = head;

        return newHead;
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
    vector<int> vals1 = {1, 2, 3, 4, 5};
    ListNode* head1 = createList(vals1);
    cout << "Original List: ";
    printList(head1);
    ListNode* result1 = sol.rotateRight(head1, 2);
    cout << "Rotated List by 2: ";
    printList(result1);
    freeList(result1);

    // Test Case 2
    vector<int> vals2 = {0, 1, 2};
    ListNode* head2 = createList(vals2);
    cout << "Original List: ";
    printList(head2);
    ListNode* result2 = sol.rotateRight(head2, 4);
    cout << "Rotated List by 4: ";
    printList(result2);
    freeList(result2);

    // Test Case 3: Empty List
    vector<int> vals3 = {};
    ListNode* head3 = createList(vals3);
    cout << "Original List: ";
    printList(head3);
    ListNode* result3 = sol.rotateRight(head3, 1);
    cout << "Rotated List by 1: ";
    printList(result3);
    freeList(result3);

    // Test Case 4: Single Element List
    vector<int> vals4 = {1};
    ListNode* head4 = createList(vals4);
    cout << "Original List: ";
    printList(head4);
    ListNode* result4 = sol.rotateRight(head4, 99);
    cout << "Rotated List by 99: ";
    printList(result4);
    freeList(result4);

    return 0;
}
