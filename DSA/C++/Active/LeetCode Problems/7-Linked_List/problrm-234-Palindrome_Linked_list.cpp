// Problem Link: https://leetcode.com/problems/palindrome-linked-list/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* getMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

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

    bool isPalindrome(ListNode* head) {
        if (head->next == NULL) {
            return true;
        }

        ListNode* middle = getMid(head);
        ListNode* temp = middle->next;
        middle->next = reverse(temp);

        ListNode* head1 = head;
        ListNode* head2 = middle->next;

        while (head2 != NULL) {
            if (head1->val != head2->val) {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        temp = middle->next;
        middle->next = reverse(temp);

        return true;
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

// Test cases
void runTests() {
    Solution solution;

    // Test case 1: Palindrome list
    vector<int> test1 = {1, 2, 3, 2, 1};
    ListNode* head1 = createLinkedList(test1);
    cout << "Is Palindrome: " << (solution.isPalindrome(head1) ? "Yes" : "No") << endl;

    // Test case 2: Non-palindrome list
    vector<int> test2 = {1, 2, 3, 4, 5};
    ListNode* head2 = createLinkedList(test2);
    cout << "Is Palindrome: " << (solution.isPalindrome(head2) ? "Yes" : "No") << endl;

    // Test case 3: Single element list
    vector<int> test3 = {1};
    ListNode* head3 = createLinkedList(test3);
    cout << "Is Palindrome: " << (solution.isPalindrome(head3) ? "Yes" : "No") << endl;

    // Test case 4: Empty list
    ListNode* head4 = nullptr;
    cout << "Is Palindrome: " << (solution.isPalindrome(head4) ? "Yes" : "No") << endl;

    // Test case 5: Palindrome with even number of elements
    vector<int> test5 = {1, 2, 2, 1};
    ListNode* head5 = createLinkedList(test5);
    cout << "Is Palindrome: " << (solution.isPalindrome(head5) ? "Yes" : "No") << endl;
}

int main() {
    runTests();
    return 0;
}
