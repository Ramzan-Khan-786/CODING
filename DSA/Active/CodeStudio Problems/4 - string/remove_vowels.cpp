//https://www.naukri.com/code360/problems/remove-vowels_839735
#include <bits/stdc++.h>

using namespace std;

string removeVowels(string str) {

  int size = str.length();
  int i = 0;
  while (i < size) {
    if (((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') ||
         (str[i] == 'o') || (str[i] == 'u')) ||
        ((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') ||
         (str[i] == 'O') || (str[i] == 'U'))) {
      str.erase(i, 1);
    } else {
      i++;
    }
  }
  return str;
}

int main() {
    cout << "HELLO WORLD" << endl;
    string str = "RamzanKhan";

    cout<<"string before removal  :"<<str<<endl;
    str= removeVowels(str);
    cout<<"string after removal  :"<<str<<endl;

    return 0;
}