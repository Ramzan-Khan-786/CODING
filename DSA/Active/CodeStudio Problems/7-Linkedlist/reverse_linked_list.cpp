// URL - https://www.naukri.com/code360/problems/reverse-the-singly-linked-list_799897

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode

    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode {
public:
    T data;
    LinkedListNode<T>* next;

    LinkedListNode(T data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to create a linked list from an array
LinkedListNode<int>* createLinkedList(int arr[], int n) {
    if (n == 0) return NULL; // Handle empty input
    LinkedListNode<int>* head = new LinkedListNode<int>(arr[0]);
    LinkedListNode<int>* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new LinkedListNode<int>(arr[i]); // Create next node
        current = current->next;
    }
    return head; // Return head of the linked list
}

// iterative approach accepted
// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     if(head==NULL || head -> next ==NULL){
//         return head;
//     }
//     LinkedListNode<int>* prev = NULL;
//     LinkedListNode<int>* curr = head;
//     LinkedListNode<int>* forward=NULL;
//     while(curr != NULL){
//         forward = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward ;
//     }
//     return prev;
// }




// recursive approach 1 accepted
// void reverse(LinkedListNode<int>* &head, LinkedListNode<int>* curr, LinkedListNode<int>* prev) {
//     // Base case
//     if (curr == NULL) {
//         head = prev; 
//         return;
//     }

//     LinkedListNode<int>* forward = curr->next; 
//     reverse(head, forward, curr);             
//     curr->next = prev;                        
// }

// LinkedListNode<int>* reverseLinkedList(LinkedListNode<int>* head) {
//     LinkedListNode<int>* prev = NULL;
//     LinkedListNode<int>* curr = head;

//     reverse(head, curr, prev); 
//     return head;
// }



// recursive approach 2

LinkedListNode<int>* reverse(LinkedListNode<int>* &head) {
    // Base case
    if (head == NULL || head -> next == NULL) {
      return head;
    }
    LinkedListNode<int> *remainingHead = reverse(head -> next);
    
    head -> next -> next=head;
    head -> next =NULL;

    return remainingHead;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    return reverse(head);
}

void printLinkedList(LinkedListNode<int>* head) {
    LinkedListNode<int>* current = head;
    while (current != NULL) {
        cout << current->data << " "; // Print current node's data
        current = current->next;     // Move to next node
    }
    cout << endl;
}

int main() {
    // Input array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create linked list from input array
    LinkedListNode<int>* head = createLinkedList(arr, n);

    // Print original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    // Print reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}
