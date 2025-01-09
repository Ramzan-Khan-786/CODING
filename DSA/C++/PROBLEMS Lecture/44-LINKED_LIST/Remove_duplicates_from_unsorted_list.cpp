#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//********************approach 1*******************

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if (head == nullptr) return nullptr;

//         ListNode* curr = head;
        
//         for (ListNode* i = head; i != nullptr; i = i->next) {
//             ListNode* prev = i;
//             for (ListNode* j = i->next; j != nullptr;) {
//                 if (i->val == j->val) {
//                     prev->next = j->next;
//                     ListNode* temp = j;
//                     j = j->next;
//                     delete temp;
//                 } else {
//                     prev = j;
//                     j = j->next;
//                 }
//             }
//         }

//         return head;
//     }
// };


// ********************approach 2*******************
class Solution {
public:
    void sort(ListNode* head){
        
    }
    ListNode *deleteDuplicates(ListNode *head) {
        

    }
};

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

void printLinkedList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val;
        if (curr->next != nullptr) cout << " -> ";
        curr = curr->next;
    }
    cout << endl;
}

void runTests() {
    Solution solution;

    vector<int> test1 = {1, 6, 5, 6, 3, 4, 5, 2, 23, 4, 5, 3, 1, 2, 3, 3};
    ListNode* head1 = createLinkedList(test1);
    cout << "Original List: ";
    printLinkedList(head1);
    head1 = solution.deleteDuplicates(head1);
    cout << "Processed List: ";
    printLinkedList(head1);
}

int main() {
    runTests();
    return 0;
}
