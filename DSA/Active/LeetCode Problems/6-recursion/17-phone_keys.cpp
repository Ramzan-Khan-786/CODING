//https://leetcode.com/problems/letter-combinations-of-a-phone-number/
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
void solve(string digit,string output,int index,vector<string>& ans,string mapping[]){
    if(index>= digit.length()){
        ans.push_back(output);
        return;
    }

    int number = digit[index]-'0';
    string value = mapping[number];
    for(int i = 0 ; i < value.length();i++){
        output.push_back(value[i]);
        solve(digit, output, index+1, ans ,mapping);
        output.pop_back();

    }

}    
public:
    vector<string> letterCombinations(string digit) {
        vector<string> ans;
        if(digit.length()==0){
            return ans;
        }
        string output;
        int index = 0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digit,output,index,ans,mapping); 
        return ans;
    }
};

int main() {
    cout <<endl << "Hello World" << endl;

    Solution mySolution;
    vector<string> ans = mySolution.letterCombinations("89");
    for(int i = 0 ; i < ans.size();i++){
        cout<<ans[i]<<endl;
    } 

    return 0;
}