#include<iostream>
using namespace std;

bool arrFunction(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5] = {3, 4845, 5, 7, 88};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    if(arrFunction(arr,size,key)==true){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present";
    }
    

    
    return 0;
}









// #include<iostream>
// using namespace std;

// void arrFunction(int arr[]){
//     // cout << &arr[4]<<endl;
//     // cout << &arr[3]<<endl;
//     // cout << &arr[2]<<endl;
//     // cout << &arr[1]<<endl;

//     // cout<<arr[0]<<endl;
//     // cout<<arr[1]<<endl;
//     // cout<<arr[2]<<endl;
//     // cout<<arr[3]<<endl;
//     // cout<<arr[4]<<endl;
//     // int size= sizeof(arr)/sizeof(arr[0]);
//     cout <<sizeof(arr)<<endl;
//     // for(int i=0;i<size)
// }

// int main(){

//     int arr[5]={3,4845,5,7,88};
//     cout <<sizeof(arr)<<endl;
//     arrFunction(arr);

//     // int *pos=&arr[0];


//     // cout << &arr[4]<<endl;
//     // cout << &arr[3]<<endl;
//     // cout << &arr[2]<<endl;
//     // cout << &arr[1]<<endl;
//     // cout << pos<<endl;

//     // arrFunction(arr);
   
    
    
// return 0;
// }