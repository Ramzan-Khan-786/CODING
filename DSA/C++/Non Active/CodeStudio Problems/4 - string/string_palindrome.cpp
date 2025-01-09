// https://www.naukri.com/code360/problems/string-palindrome_624944
#include <bits/stdc++.h>

using namespace std;

char toLowercase(char ch) {
  if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
    return ch;
  } 
  else {
    return ch - 'A' + 'a';
  }
}

int validChar(char ch) {
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
    return 1;
  }
  return 0;
}

bool checkPalindrome(char str[]) {
  int st = 0;
  int en = strlen(str) - 1;

  while (st < en) {
    if (!validChar(str[st])) {
      st++;
      continue;
    }
    if (!validChar(str[en])) {
      en--;
      continue;
    }
    if (toLowercase(str[st]) != toLowercase(str[en])) {
      return false;
    } else {
      st++;
      en--;
    }
  }
  return true;
}

int main() {
    char str[] = "rar";
    if(checkPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}