#include<iostream>
using namespace std;

int main(){

    int a , b ;
    // cout << "Enter the first number  :";
    cin>>a;
    // cout << "Enter the second number  :";
    cin>>b;
    char op;
    // cout << "Enter the operator  :";
    cin>>op;


    switch (op)
    {
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;

        default:
        cout<<"ERROR";
        break;
    }
return 0;
} 