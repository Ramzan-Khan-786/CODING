// https://www.naukri.com/code360/problems/reverse-the-string_799927
#include<iostream>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

 
string reverseString(string str)
{

	int n = str.size();

	int s=0;
	int e=n-1;
	
	while(s<=e){
		swap(str[s],str[e]);
		s++;
		e--;
	}
	return str;
}

int main(){
  vector<char> vec = {'r', 't', 'g', 'e', 'n'};
    
    // Convert vector<char> to string
    string str(vec.begin(), vec.end());
    
    // Reverse the string
    str = reverseString(str);
    
    // Convert the string back to vector<char>
    vector<char> reversedVec(str.begin(), str.end());
    
    // Print the reversed vector
    for (int i = 0; i < reversedVec.size(); i++) {
        cout << reversedVec[i] << " ";
    }
    cout << endl;
return 0;
}