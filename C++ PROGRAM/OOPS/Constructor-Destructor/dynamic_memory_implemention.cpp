//Problem 2: Dynamic Memory Allocation
/*
Create a class DynamicSample with a constructor and destructor.
Use new to allocate memory for an object and delete to deallocate it.
Observe when the destructor is called.
*/
#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;

    // Constructor
    node(int data) {
        cout << "Constructor called" << endl;
        this->data = data;
        cout << "Data inside constructor : " << data << endl;
    }

    // Destructor
    ~node() {
        cout << "Destructor called" << endl;
        cout << "Data inside destructor : " << data << endl;
    }
};

int main() {
    cout << endl << "Hello World" << endl;
    cout << "Creating object of class node" << endl;
    node *obj = new node(100);

    cout << "Deleting object of class node" << endl;
    delete obj; // Destructor will be called here.

    // Avoid accessing obj->data after deletion
    cout << "Object deleted, no further access to obj->data" << endl;

    return 0;
}
