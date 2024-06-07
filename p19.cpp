//rec-6
//125. Valid Palindrome
//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
//Given a string s, return true if it is a palindrome, or false otherwise.

#include<bits/stdc++.h>
using namespace std;
//USING RECURTION:-

// bool checkPalindrome(const string&s, int start, int end){
//      if(start>=end){
//          return true;
//      }
//      if(!isalnum(s[start])){
//          checkPalindrome(s,start+1,end);
//      }
//      if(!isalnum(s[end])){
//          checkPalindrome(s,start,end-1);
//      }
//      if(tolower(s[start])!=tolower(s[end])){
//          return false;
//      }
//      return checkPalindrome(s,start++,end-1);
//  }

 //USING WHILE LOOP:-

 bool checkPalindrome(string s, int start, int end){
        while(start<end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
           if(tolower(s[start])!=tolower(s[end])){
           return false;
            }
            else 
            start++;
            end--;
        }
            return true;
 }

bool isPalindrome(string s) {
    int end = s.size() - 1;
    return checkPalindrome(s, 0, end);
}

int main() {
    string s = "A man, a plan, a canal, Panama!";
    if (isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}