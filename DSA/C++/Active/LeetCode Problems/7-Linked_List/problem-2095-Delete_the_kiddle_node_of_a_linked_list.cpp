// link - https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
#include <iostream>
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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;
        delete slow;

        return head;
    }

    // Utility function to print the list
    void printList(ListNode* head) {
        ListNode* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Utility function to create a new list
    ListNode* createList(int arr[], int n) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        for (int i = 0; i < n; i++) {
            ListNode* newNode = new ListNode(arr[i]);
            if (!head) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
};

int main() {
    Solution solution;

    int arr[] = {1, 2, 3, 4, 5};  // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = solution.createList(arr, n);
    cout << "Original List: ";
    solution.printList(head);

    head = solution.deleteMiddle(head);  // Deleting the middle node

    cout << "Modified List: ";
    solution.printList(head);

    return 0;
}
