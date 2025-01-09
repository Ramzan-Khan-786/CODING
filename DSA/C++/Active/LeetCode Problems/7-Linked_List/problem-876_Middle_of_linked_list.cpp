// Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/
// Problem : 876. Middle of the Linked List
#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;

    // Constructors
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Solution class for the problem
class Solution {
public:
    int getLength(ListNode* head){
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }

    ListNode* middleNode(ListNode* head) {
        int len=getLength(head);
        ListNode* temp=head;
        int cnt=0;
        int ans=len/2;
        while(cnt<ans){
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
};

// LinkedList utility class for creating and managing a linked list
class LinkedList {
private:
    ListNode* head;

public:
    // Constructor
    LinkedList() : head(nullptr) {}

    // Destructor
    ~LinkedList() {
        while (head) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Function to get the head of the linked list
    ListNode* getHead() const {
        return head;
    }

    // Print the list
    void printList() const {
        ListNode* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Insert node at the tail
    void insertNodeAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            return;
        }
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to create a linked list from a vector
    void createFromVector(const vector<int>& arr) {
        for (int val : arr) {
            insertNodeAtTail(val);
        }
    }
};

int main() {
    cout << "Hello Fellow Coder!" << endl;

    // Input data
    vector<int> arr = {1, 3, 4, 2, 2};

    // Create a linked list
    LinkedList list;
    list.createFromVector(arr);

    // Print the linked list
    cout << "Original Linked List: ";
    list.printList();

    // Find the middle node using the Solution class
    Solution mySol;
    ListNode* middle = mySol.middleNode(list.getHead());

    // Print the middle node value
    if (middle) {
        cout << "Middle Node Value: " << middle->val << endl;
    } else {
        cout << "The linked list is empty." << endl;
    }

    return 0;
}
