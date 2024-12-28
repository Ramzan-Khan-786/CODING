//Problem 1: Constructor and Destructor in Static Memory
/*problem statement :  Define a class Sample with a constructor and destructor. 
Declare a static object inside the main function and observe
the order of constructor and destructor calls.
*/
#include <bits/stdc++.h>
using namespace std;

class Sample{
        public:
        Sample(){
            cout << "Constructor called" << endl;
        }
        ~Sample(){
            cout << "Destructor called" << endl;
        }
    };

int main() {
    cout <<endl << "Hello World" << endl;
    cout << "Creating object of class Sample" << endl;
    Sample obj;
    return 0;
}



