// problem - 19-remove_nth_node_from_end_of_list
// link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    // Function to delete a node at a specific position
    void deleteNode(int position, ListNode*& head) {
        if (head == NULL) return;

        // If the head needs to be removed
        if (position == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        ListNode* current = head;
        ListNode* previous = NULL;
        int cnt = 1;

        // Traverse to the node to be deleted
        while (cnt < position && current != NULL) {
            previous = current;
            current = current->next;
            cnt++;
        }

        // If the node doesn't exist
        if (current == NULL) return;

        // Adjust pointers and delete the node
        previous->next = current->next;
        delete current;
    }

    // Function to count the total number of nodes
    int count(ListNode* head) {
        int size = 0;
        while (head != NULL) {
            size++;
            head = head->next;
        }
        return size;
    }

    // Function to remove the nth node from the end of the list
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int totalNodes = count(head);
        int removePosition = totalNodes - n + 1;

        // Check if the position is valid
        if (removePosition <= 0 || removePosition > totalNodes) return head;

        // Delete the node
        deleteNode(removePosition, head);
        return head;
    }
};

// Helper function to create a linked list from a vector
ListNode* createLinkedList(const vector<int>& values) {
    if (values.empty()) return NULL;

    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (int i = 1; i < values.size(); i++) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Test the Solution
int main() {
    Solution solution;

    // Example list: {1, 2, 3, 4, 5}
    vector<int> values = {1, 2, 3, 4, 5};
    ListNode* head = createLinkedList(values);

    cout << "Original List: ";
    printLinkedList(head);

    // Remove the 2nd node from the end
    head = solution.removeNthFromEnd(head, 2);

    cout << "List After Removing 2nd Node from End: ";
    printLinkedList(head);

    return 0;
}
