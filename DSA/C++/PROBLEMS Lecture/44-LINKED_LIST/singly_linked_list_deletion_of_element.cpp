#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~node() {
        cout << "Deleting Node: " << data << endl;
    }
};

void insertAtTail(node*& tail, node*& head, int value) {
    node* temp = new node(value);
    if (tail == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void insertAtHead(node*& head, node*& tail, int value) {
    node* temp = new node(value);
    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}

void insertAtMiddle(node*& tail, node*& head, int value, int position) {
    if (position <= 1) {
        insertAtHead(head, tail, value);
        return;
    }

    node* temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL || temp->next == NULL) {
        insertAtTail(tail, head, value);
        return;
    }

    node* newNode = new node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

void print(node* nodes) {
    while (nodes != NULL) {
        cout << nodes->data << " -> ";
        nodes = nodes->next;
    }
    cout << "NULL" << endl;
}

void deleteNode(int position, node*& head) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    if (position == 1) {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    node* current = head;
    node* previous = NULL;
    int cnt = 1;

    while (cnt < position && current != NULL) {
        previous = current;
        current = current->next;
        cnt++;
    }

    if (current == NULL) {
        cout << "Position out of bounds. Nothing to delete." << endl;
        return;
    }

    previous->next = current->next;
    current->next = NULL;
    delete current;
}

int main() {

    node* Head_Node = NULL;
    node* Tail_Node = NULL;

    insertAtHead(Head_Node, Tail_Node, 1);
    insertAtHead(Head_Node, Tail_Node, 2);
    insertAtHead(Head_Node, Tail_Node, 3);
    print(Head_Node);

    insertAtTail(Tail_Node, Head_Node, 4);
    insertAtTail(Tail_Node, Head_Node, 5);
    insertAtTail(Tail_Node, Head_Node, 6);
    print(Head_Node);

    insertAtMiddle(Tail_Node, Head_Node, 7, 2);
    insertAtMiddle(Tail_Node, Head_Node, 8, 1);
    insertAtMiddle(Tail_Node, Head_Node, 9, 10);
    print(Head_Node);

    deleteNode(1, Head_Node);
    deleteNode(2, Head_Node);
    deleteNode(10, Head_Node);
    print(Head_Node);

    return 0;
}
