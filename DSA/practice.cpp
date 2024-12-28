#include <bits/stdc++.h>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};


class Solution {
public:
    int getSize(ListNode* &head){
        ListNode* temp=head;
        
        int count=0;
        while(temp -> next != NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=getSize(head);
        int position=size-n+1;
        ListNode* temp=head;
    }
    void print(ListNode* nodes) {
        while (nodes != NULL) {
            cout << nodes->val << " -> ";
            nodes = nodes->next;
        }
    }
};

int main() {
    cout <<endl << "Hello World" << endl;
    
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution s( head ,4);
    s.print(head);
    
    return 0;
}