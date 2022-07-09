#include <iostream>
using namespace std;

string isPalindrome(string str){
    for (int i=0;i<str.length() / 2;i++){
        if (str[i] != str[str.length()-i-1]){
            return "String is not Palindrome";
        }
    }return "String is palindrome";
}
int main(){
    string str = "Hello World";
    cout<<isPalindrome(str);
}