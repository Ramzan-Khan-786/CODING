//link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* curr = head;
        while (curr != NULL) {
            if ((curr->next != NULL) && curr->val == curr->next->val) {
                ListNode* next_Next = curr->next->next;
                ListNode* nodeToDelete = curr->next;
                delete(nodeToDelete);
                curr->next = next_Next;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};

// Utility function to create a linked list from a vector
ListNode* createLinkedList(const vector<int>& nums) {
    if (nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < nums.size(); ++i) {
        curr->next = new ListNode(nums[i]);
        curr = curr->next;
    }
    return head;
}

// Utility function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val;
        if (curr->next != nullptr) cout << " -> ";
        curr = curr->next;
    }
    cout << endl;
}

// Test cases
void runTests() {
    Solution solution;

    // Test case 1
    vector<int> test1 = {1, 1, 2, 3, 3};
    ListNode* head1 = createLinkedList(test1);
    cout << "Original List: ";
    printLinkedList(head1);
    head1 = solution.deleteDuplicates(head1);
    cout << "Processed List: ";
    printLinkedList(head1);

    // Test case 2
    vector<int> test2 = {1, 1, 1};
    ListNode* head2 = createLinkedList(test2);
    cout << "Original List: ";
    printLinkedList(head2);
    head2 = solution.deleteDuplicates(head2);
    cout << "Processed List: ";
    printLinkedList(head2);

    // Test case 3
    vector<int> test3 = {1, 2, 3};
    ListNode* head3 = createLinkedList(test3);
    cout << "Original List: ";
    printLinkedList(head3);
    head3 = solution.deleteDuplicates(head3);
    cout << "Processed List: ";
    printLinkedList(head3);
}

int main() {
    runTests();
    return 0;
}
