//problem-216-Reverse_Linked_List
//https://leetcode.com/problems/reverse-linked-list/description/
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
    ListNode* reverse_list(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* reversedList=reverse_list(head);
        return  reversedList;
    }
};  

void printList(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

void insertNodeAtTail(ListNode* &head, int val){
    ListNode* newNode = new ListNode(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    ListNode* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertNodeAtHead(ListNode* &head, int val){
    ListNode* newNode = new ListNode(val);
    newNode->next=head;
    head=newNode;
}
void insertNodeAtPosition(ListNode* &head, int val, int pos){
    ListNode* newNode = new ListNode(val);
    ListNode* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
} 


int main() {
    cout <<endl << "Hello World" << endl;
    vector<int> arr = {1,3,4,2,2};

    ListNode* head = new ListNode(1);
    for(int i=1;i<arr.size();i++){
        insertNodeAtTail(head, arr[i]);
    }

    Solution mySol;
    printList(mySol.reverseList(head));

    
    return 0;
}