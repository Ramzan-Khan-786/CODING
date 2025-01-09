#include <bits/stdc++.h>
using namespace std;

int power(int base ,int index){
    if( index == 0 ){
        return 1;
    }
    if(base == 1 ){
        return 1;
    }
    if(index == 1){
        return base;
    }
    return base*power(base,index-1);

}

int main() {
    cout <<endl << "Hello World" << endl;
    int base=2;
    int index=2;
    int ans=power(base,index);
    cout<<endl<<ans<<endl;
    return 0;
}