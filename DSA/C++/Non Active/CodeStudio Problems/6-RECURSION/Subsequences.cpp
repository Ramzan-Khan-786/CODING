//https://www.naukri.com/code360/problems/subsequences-of-string_985087
#include <bits/stdc++.h>
using namespace std;

void solve(string str,string output,int index,vector<string>& ans){
	if(index >= str.length()){
          if (output.length() > 0) {
            ans.push_back(output);
          }
          return;
        }

	//exclude
	solve(str,output,index+1,ans);

	//include
	char element=str[index];
	output.push_back(element);
	solve(str,output,index+1,ans);
	

}

vector<string> subsequences(string str){
	
	vector<string> ans;
	string output = "";
	int index = 0;
	solve(str,output,index,ans);
	return ans;
}


int main() {
    cout <<endl << "Hello World" << endl;
    vector<string> ans = subsequences("abcde");
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}