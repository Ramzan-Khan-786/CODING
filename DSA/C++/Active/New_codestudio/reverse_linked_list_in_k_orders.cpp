#include <bits/stdc++.h>
using namespace std;

// Node structure definition
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

// Function to reverse a linked list in groups of size k
Node* kReverse(Node* head, int k) {
    // Base case
    if (head == NULL) return NULL;

    // Reverse the first k nodes
    Node* prev = NULL;
    Node* current = head;
    Node* forward = NULL;

    int count = 0;
    while (current != NULL && count < k) {
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
        count++;
    }

    // Recursively process the remaining nodes
    if (forward != NULL) {
        head->next = kReverse(forward, k);
    }

    // Return the new head of the reversed list
    return prev;
}

// Helper function to print a linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Helper function to create a linked list from a vector
Node* createList(vector<int> values) {
    if (values.empty()) return NULL;
    Node* head = new Node(values[0]);
    Node* current = head;
    for (size_t i = 1; i < values.size(); i++) {
        current->next = new Node(values[i]);
        current = current->next;
    }
    return head;
}

int main() {
    // Example usage
    vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;

    Node* head = createList(values);
    cout << "Original List: ";
    printList(head);

    head = kReverse(head, k);

    cout << "Reversed List in Groups of " << k << ": ";
    printList(head);

    return 0;
}
