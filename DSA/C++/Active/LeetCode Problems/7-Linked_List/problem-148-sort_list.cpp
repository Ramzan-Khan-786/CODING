//  https://leetcode.com/problems/sort-list
#include <iostream>
#include <vector>
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

class Solution {
public:
    ListNode* getMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        if (left == NULL) {
            return right;
        }
        if (right == NULL) {
            return left;
        }

        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;

        while (left != NULL && right != NULL) {
            if (left->val < right->val) {
                temp->next = left;
                temp = left;
                left = left->next;
            } else {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }

        while (left != NULL) {
            temp->next = left;
            temp = left;
            left = left->next;
        }

        while (right != NULL) {
            temp->next = right;
            temp = right;
            right = right->next;
        }

        ans = ans->next;
        return ans;
    }

    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* mid = getMid(head);

        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        left = sortList(left);
        right = sortList(right);

        ListNode* result = merge(left, right);

        return result;
    }
};

// Helper functions
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
    vector<int> test1 = {4, 2, 1, 3};
    ListNode* head1 = createLinkedList(test1);
    cout << "Original List: ";
    printLinkedList(head1);
    head1 = solution.sortList(head1);
    cout << "Sorted List: ";
    printLinkedList(head1);

    // Test case 2
    vector<int> test2 = {-1, 5, 3, 4, 0};
    ListNode* head2 = createLinkedList(test2);
    cout << "Original List: ";
    printLinkedList(head2);
    head2 = solution.sortList(head2);
    cout << "Sorted List: ";
    printLinkedList(head2);

    // Test case 3
    vector<int> test3 = {1};
    ListNode* head3 = createLinkedList(test3);
    cout << "Original List: ";
    printLinkedList(head3);
    head3 = solution.sortList(head3);
    cout << "Sorted List: ";
    printLinkedList(head3);

    // Test case 4
    vector<int> test4 = {};
    ListNode* head4 = createLinkedList(test4);
    cout << "Original List: ";
    printLinkedList(head4);
    head4 = solution.sortList(head4);
    cout << "Sorted List: ";
    printLinkedList(head4);
}

int main() {
    runTests();
    return 0;
}
