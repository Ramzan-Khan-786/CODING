
// #include <bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

// //Constructor
//     node(int data){
//         this -> data = data;
//         this -> next = NULL; 
//     }

// };

// void insertAtTail(node* &tail,int assignment_Value){
//     node* temp=new node(assignment_Value);
//     tail -> next = temp;
//     tail = temp; 
// }

// void insertAtHead(node* &head,int assignment_Value){

//     node* temp=new node(assignment_Value);
//     temp -> next = head;
//     head = temp;
// }

// void insertAtMiddle(node* &tail,node* &head,int assignment_Value,int position){
//     if(position == 1){
//         insertAtHead(head,assignment_Value);
//         return;
//     }

//     node* temp = head ;
//     int cnt=1;

//     while(cnt < position-1){
//         temp=temp -> next;
//         cnt++;
//     }

//     if(temp -> next == NULL){
//         insertAtTail(tail,assignment_Value);
//         return;
//     }


//     node* nodeToInsert=new node(assignment_Value);

//     nodeToInsert -> next =temp -> next;
//     temp -> next =nodeToInsert;
// }

// void print(node* nodes){
//     while(nodes != NULL){
//         cout << nodes -> data << " -> ";
//         nodes = nodes -> next;
//     }
//     cout << "NULL" << endl;
// }
// int main() {
//     cout <<endl << "Hello World" << endl;
//     int assignment_Value = 0;

//     // Initialize head and tail to the same node
//     node* pointer_node = new node(assignment_Value);
//     node* Head_Node = pointer_node;
//     node* Tail_Node = pointer_node;
    
//     // Insert at head
//     cout<<endl<< "INSERT AT HEAD"<<endl;
    
//     insertAtHead(Head_Node, 1);
//     print(Head_Node);
//     insertAtHead(Head_Node, 2);
//     print(Head_Node);
//     insertAtHead(Head_Node, 3);
//     print(Head_Node);

//     // Insert at tail
//     cout<<endl<< "INSERT AT TAIL"<<endl;
//     insertAtTail(Tail_Node, 1);
//     print(Head_Node);
//     insertAtTail(Tail_Node, 2);
//     print(Head_Node);
//     insertAtTail(Tail_Node, 3);
//     print(Head_Node);

//     // Insert at middle
//     cout<<endl<< "INSERT AT MIDDLE"<<endl;
//     insertAtMiddle(Tail_Node,Head_Node, 4, 2);
//     print(Head_Node);

//     // Insert at start
//     cout<<endl<< "INSERT AT START"<<endl;
//     insertAtMiddle(Tail_Node,Head_Node, 5, 1);
//     print(pointer_node);
    
//     // Insert at end
//     insertAtMiddle(Tail_Node,Head_Node, 6, 6);
//     print(pointer_node);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(node* &tail, node* &head, int assignment_Value) {
    node* temp = new node(assignment_Value);
    if (tail == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void insertAtHead(node* &head, node* &tail, int assignment_Value) {
    node* temp = new node(assignment_Value);
    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}

void insertAtMiddle(node* &tail, node* &head, int assignment_Value, int position) {
    if (position == 1) {
        insertAtHead(head, tail, assignment_Value);
        return;
    }

    node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL || temp->next == NULL) {
        insertAtTail(tail, head, assignment_Value);
        return;
    }

    node* nodeToInsert = new node(assignment_Value);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(node* nodes) {
    while (nodes != NULL) {
        cout << nodes->data << " -> ";
        nodes = nodes->next;
    }
    cout << "NULL" << endl;
}

int main() {
    cout << endl << "Hello World" << endl;

    node* Head_Node = NULL;
    node* Tail_Node = NULL;

    // Insert at head
    insertAtHead(Head_Node, Tail_Node, 1);
    print(Head_Node);
    insertAtHead(Head_Node, Tail_Node, 2);
    print(Head_Node);
    insertAtHead(Head_Node, Tail_Node, 3);
    print(Head_Node);

    // Insert at tail
    cout << endl << "INSERT AT TAIL" << endl;
    insertAtTail(Tail_Node, Head_Node, 4);
    print(Head_Node);
    insertAtTail(Tail_Node, Head_Node, 5);
    print(Head_Node);
    insertAtTail(Tail_Node, Head_Node, 6);
    print(Head_Node);

    // Insert at middle
    cout << endl << "INSERT AT MIDDLE" << endl;
    insertAtMiddle(Tail_Node, Head_Node, 7, 2);
    print(Head_Node);

    // Insert at start
    cout << endl << "INSERT AT START" << endl;
    insertAtMiddle(Tail_Node, Head_Node, 8, 1);
    print(Head_Node);

    // Insert at end
    cout << endl << "INSERT AT END" << endl;
    insertAtMiddle(Tail_Node, Head_Node, 9, 10);
    print(Head_Node);

    //print start end
    cout << "Start: " << Head_Node->data << endl;
    cout << "End: " << Tail_Node->data << endl;

    // cout<<r;
    return 0;
}
