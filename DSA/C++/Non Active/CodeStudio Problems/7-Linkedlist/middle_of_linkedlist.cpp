//URL : https://www.naukri.com/code360/problems/middle-of-linked-list_973250
#include <bits/stdc++.h>
using namespace std;




/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

// Approach 1
// int getLength(Node* head) {
//     int length=0;
//     while(head != NULL){
//         length++;
//         head = head -> next;
//     }
//     return length;
// }
// Node *findMiddle(Node *head) {
//     int len=getLength(head);
//     int ans=(len/2);
//     Node* temp=head;
//     int cnt=0;
//     while(cnt<ans){
//         temp=temp -> next;
//         cnt++;
//     }
//     return temp;
// }

// Approach 2
Node *findMiddle(Node *head) {
    // for 0 or 1 node
    if(head==NULL || head->next==NULL){
        return head;
    }
    // for 2 node
    if(head->next->next==NULL){
        return head-> next;
    }
    // for more tha 2 nodes
    Node* slow=head;
    Node* fast=head->next;
    while(fast != NULL){
        fast =fast-> next;
        if(fast!= NULL){
            fast = fast -> next;
        }
        slow =slow -> next;
    }
    return slow;
}


// Function to create a linked list from an array
Node* createLinkedList(int arr[], int n) {
    if (n == 0) return NULL;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}


// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Input array
    int arr[] = {1, 2, 3, 4,6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create linked list
    Node* head = createLinkedList(arr, n);

    // Print original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Find and print the middle node
    Node* middle = findMiddle(head);
    if (middle != NULL) {
        cout << "Middle Node: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }
    return 0;
}