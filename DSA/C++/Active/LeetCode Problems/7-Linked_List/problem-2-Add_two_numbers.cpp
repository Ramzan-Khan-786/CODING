// LeetCode Problem: https://leetcode.com/problems/add-two-numbers/
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
private:
    // ListNode* reverse(ListNode* head) {
    //     ListNode* curr = head;
    //     ListNode* prev = NULL;
    //     ListNode* next = NULL;
        
    //     while(curr != NULL) {
    //         next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = next;
    //     }
    //     return prev;
    // }
    
    void insertAtTail(ListNode* &head, ListNode* &tail, int val) {
        ListNode* temp = new ListNode(val);
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }
    
    ListNode* add(ListNode* first, ListNode* second) {
        int carry = 0;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0) {
            int val1 = (first != NULL) ? first->val : 0;
            int val2 = (second != NULL) ? second->val : 0;
            
            int sum = carry + val1 + val2;
            int digit = sum % 10;
            
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum / 10;
            if(first != NULL) first = first->next;
            if(second != NULL) second = second->next;
        }
        return ansHead;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // l1 = reverse(l1);
        // l2 = reverse(l2);
        
        ListNode* ans = add(l1, l2);
        
        // return reverse(ans);
        return ans;
    }
};


// Utility function to create a linked list from a vector
ListNode* createLinkedList(const vector<int>& nums) {
    if (nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < nums.size(); ++i) {
        curr->next = new ListNode(nums[i]);
        curr = curr->next;
    }
    return head;
}

// Utility function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val;
        if (curr->next != nullptr) cout << " -> ";
        curr = curr->next;
    }
    cout << endl;
}

// Test cases
void runTests() {
    Solution solution;

    // Test case 1: Two lists representing the numbers 342 and 465
    vector<int> test1 = {2, 4, 3}; // represents 342
    vector<int> test2 = {5, 6, 4}; // represents 465
    ListNode* l1 = createLinkedList(test1);
    ListNode* l2 = createLinkedList(test2);
    cout << "Original Lists: ";
    printLinkedList(l1);
    printLinkedList(l2);
    ListNode* result1 = solution.addTwoNumbers(l1, l2);
    cout << "Sum List: ";
    printLinkedList(result1);

    // Test case 2: Two lists representing the numbers 0 and 0
    vector<int> test3 = {0};
    vector<int> test4 = {0};
    ListNode* l3 = createLinkedList(test3);
    ListNode* l4 = createLinkedList(test4);
    cout << "Original Lists: ";
    printLinkedList(l3);
    printLinkedList(l4);
    ListNode* result2 = solution.addTwoNumbers(l3, l4);
    cout << "Sum List: ";
    printLinkedList(result2);

    // Test case 3: Two lists representing the numbers 999 and 1
    vector<int> test5 = {9, 9, 9};
    vector<int> test6 = {1};
    ListNode* l5 = createLinkedList(test5);
    ListNode* l6 = createLinkedList(test6);
    cout << "Original Lists: ";
    printLinkedList(l5);
    printLinkedList(l6);
    ListNode* result3 = solution.addTwoNumbers(l5, l6);
    cout << "Sum List: ";
    printLinkedList(result3);
}

int main() {
    runTests();
    return 0;
}
