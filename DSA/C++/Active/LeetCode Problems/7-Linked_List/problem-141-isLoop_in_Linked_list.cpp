// problem-141-isLoop_in_Linked_list
// https://leetcode.com/problems/linked-list-cycle/description/
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.*/
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
// ***************approach 1***************
// #include<map>
// class Solution {
// public:

//     bool hasCycle(ListNode *head) {
//         if(head==NULL){
//             return false;
//         }

//         ListNode* temp=head;
//         map<ListNode* , bool> occurrance;

//         while(temp!=NULL){
//             if(occurrance[temp]==true){
//                 return true;
//             }
//             occurrance[temp] = true;
//             temp=temp->next;
//         }
//         return false;
//     }
// };

//*********approach 2->floyd's cycle***********

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false; // No cycle in empty list or single node
        }

        ListNode* slow = head; // Slow pointer
        ListNode* fast = head; // Fast pointer

        // Traverse the list with two pointers
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next; // Move slow by one step
            fast = fast->next->next; // Move fast by two steps

            // If slow and fast meet, cycle exists
            if (slow == fast) {
                return true;
            }
        }

        return false; // No cycle detected
    }
};

int main() {
    // Test case
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = head; // Creates a cycle

    Solution solution;
    cout << (solution.hasCycle(head) ? "Cycle detected" : "No cycle") << endl;

    return 0;
}