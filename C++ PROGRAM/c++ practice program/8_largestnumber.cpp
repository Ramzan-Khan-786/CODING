#include <iostream>
// #include<math.h>
using namespace std;
class largenum{
    public:
    int toChkNum(int ,int );
};
int largenum::toChkNum(int a,int b){
    if(a<b){
        return b;
    }
    else{
        return a;
    }
};



int main()
{

    int x, y;
    cout << "Enter the first number : ";
    cin >> x;
    cout << "Enter the second number : ";
    cin >> y;

    // ********method 1(if else statement)*********

    
    if(x==y){
        cout<<x<<" is equal to "<<y<<endl;
    }
    else if (x>y){
        cout<<x<<" is greater than "<<y<<endl;
    }
    else cout<<y<<" is greater than "<<x<<endl;
    

    // **********method 2(inbuilt max() function)************


    
    if(x==y){
        cout<<"both are equal"<<endl;
    }
    else{
        cout <<"the greater number is "<<max(x,y)<<endl;
    }
    

// ********method 3(by using classes)*********


    largenum obj;
    if(x==y){
        cout<<"both are equal"<<endl;
    }
    else{
        cout <<"the greater number is "<<obj.toChkNum(x,y)<<endl;
    }

    return 0;
}