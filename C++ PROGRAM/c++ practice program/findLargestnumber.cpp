#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Ramzan";

    // int length = str.length() ;
    // string str2(length, ' '); 
    // for(int i = length; i >= 0; i--){
    //     str2[i] = str[length - i - 1];
    // }

    int i = 0, j = str.length() -1;
    while(i<j){
        swap(str[i], str[j]);
        i++;
        j--;
    }


    cout << str; 
    return 0;
}
