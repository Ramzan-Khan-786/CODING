#include<iostream>
using namespace std;
int digitCount(int num){
    int count = 0;
    while(num>0){
        num=num/10;
        count = count+1;
    }
    return count;
}

int main(){
    int num=1636,number; 
    int num_copy = num;
    int sumval = 0;
    int count = 0;
    int power = digitCount(num);

     


    while(num>0){
        number=num%10;
        num=num/10;
        int val = 1;

        for(int i = 0;i< power; i++){
            val = number*val;
        }

        sumval = val+sumval;
        
        
    }
    cout<< sumval<<endl;
    if(sumval == num_copy){
        cout << "ArmStrong"<< endl;
    }
    else{
        cout << "Not ArmStrong Number"<< endl;
    }

    

return 0;
}