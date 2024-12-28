//Problem 3: Mixing Static and Dynamic Objects
/*
Declare both static and dynamic objects of a class 
MixedSample in the same program. 
Observe the sequence of constructor and destructor calls.
*/

#include <bits/stdc++.h>
using namespace std;

class MixedSample { 
    public:
    int data; // Data member
    MixedSample* node; // Pointer to next node

    MixedSample(int data) {
        cout << "Constructor called" << endl;
        this->data = data;
        cout << "Data inside constructor : " << data << endl;
        
    }
    ~MixedSample() {
        cout << "Destructor called" << endl;
        cout << "Data inside destructor : " << data << endl;

    }
};

int main() {
    cout <<endl << "Hello World" << endl;

    cout << "Creating object of class MixedSample" << endl;

    MixedSample* obj1 = new MixedSample(100);
    MixedSample* obj2 = new MixedSample(200);

    cout << "Deleting object of class MixedSample" << endl;
    delete obj1,obj2; // Destructor will be called here.
    // obj1 will be deleted automatically when the program ends.
    return 0;
}