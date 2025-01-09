// Problem Link: https://leetcode.com/problems/linked-list-cycle-ii/
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* getCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return slow;
            }
        }

        return NULL;
    }

    ListNode* detectCycle(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }

        ListNode* intersection = getCycle(head);

        if (intersection == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        while (slow != intersection) {
            slow = slow->next;
            intersection = intersection->next;
        }

        return slow;
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

// Function to create a cycle in the linked list
void createCycle(ListNode* head, int pos) {
    if (head == NULL || pos < 0) return;
    ListNode* temp = head;
    ListNode* cycleNode = NULL;
    int index = 0;
    
    while (temp->next != NULL) {
        if (index == pos) {
            cycleNode = temp;
        }
        temp = temp->next;
        index++;
    }
    
    if (cycleNode != NULL) {
        temp->next = cycleNode; // Creating a cycle
    }
}

int main() {
    vector<int> values = {3, 2, 0, -4}; // Example linked list
    ListNode* head = createList(values);
    
    // Create a cycle starting at position 1 (0-based index)
    createCycle(head, 1);

    Solution solution;
    ListNode* cycleStart = solution.detectCycle(head);
    
    if (cycleStart != NULL) {
        cout << "Cycle detected at node with value: " << cycleStart->val << endl;
    } else {
        cout << "No cycle detected" << endl;
    }

    return 0;
}
