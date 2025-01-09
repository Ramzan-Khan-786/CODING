// link : https://leetcode.com/problems/add-two-numbers-ii/
// 445. Add Two Numbers II
#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Solution class as provided
class Solution {
private:
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* temp = new ListNode(val);
        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode* add(ListNode* first, ListNode* second) {
        int carry = 0;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        while (first != NULL || second != NULL || carry != 0) {
            int val1 = (first != NULL) ? first->val : 0;
            int val2 = (second != NULL) ? second->val : 0;
            int sum = carry + val1 + val2;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            if (first != NULL) first = first->next;
            if (second != NULL) second = second->next;
        }
        return ansHead;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* ans = add(l1, l2);
        return reverse(ans);
    }
};

// Helper functions for testing
ListNode* createLinkedList(const vector<int>& nums) {
    if (nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* current = head;
    for (size_t i = 1; i < nums.size(); ++i) {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }
    return head;
}

void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Test cases
void runTests() {
    Solution solution;

    // Test case 1
    vector<int> l1 = {7, 2, 4, 3}; // Represents 7243
    vector<int> l2 = {5, 6, 4};    // Represents 564
    ListNode* list1 = createLinkedList(l1);
    ListNode* list2 = createLinkedList(l2);
    cout << "Input List 1: ";
    printLinkedList(list1);
    cout << "Input List 2: ";
    printLinkedList(list2);

    ListNode* result = solution.addTwoNumbers(list1, list2);
    cout << "Result: ";
    printLinkedList(result);
}

int main() {
    runTests();
    return 0;
}
