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
    ListNode* solve(ListNode* list1, ListNode* list2) {
        if (list1->next == NULL) {
            list1->next = list2;
            return list1;
        }
        
        ListNode* curr1 = list1;
        ListNode* next1 = curr1->next;
        ListNode* curr2 = list2;
        ListNode* next2 = curr2->next;

        while (next1 != NULL && curr2 != NULL) {
            if (curr2->val >= curr1->val && curr2->val <= next1->val) {
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;

                curr1 = curr2;
                curr2 = next2;
            } else {
                curr1 = next1;
                next1 = next1->next;
                if (next1 == NULL) {
                    curr1->next = curr2;
                    return list1;
                }
            }
        }
        return list1;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL && list2 == NULL)
            return NULL;
        
        if (list1 == NULL)
            return list2;

        if (list2 == NULL)
            return list1;

        if (list1->val <= list2->val) {
            return solve(list1, list2);
        } else {
            return solve(list2, list1);
        }
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
    vector<int> test1 = {1, 2, 4, 5, 6};
    vector<int> test2 = {1, 3, 4, 7};
    ListNode* head1 = createLinkedList(test1);
    ListNode* head2 = createLinkedList(test2);
    cout << "Original List 1: ";
    printLinkedList(head1);
    cout << "Original List 2: ";
    printLinkedList(head2);
    ListNode* mergedHead = solution.mergeTwoLists(head1, head2);
    cout << "Merged List: ";
    printLinkedList(mergedHead);
    
    // Test case 2: One list is empty
    vector<int> test3 = {1, 2, 4};
    ListNode* head3 = createLinkedList(test3);
    ListNode* mergedHead2 = solution.mergeTwoLists(head3, nullptr);
    cout << "Merged List with empty second list: ";
    printLinkedList(mergedHead2);

    // Test case 3: Both lists are empty
    ListNode* mergedHead3 = solution.mergeTwoLists(nullptr, nullptr);
    cout << "Merged List with both lists empty: ";
    printLinkedList(mergedHead3);
}

int main() {
    runTests();
    return 0;
}
