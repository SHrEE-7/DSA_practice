#include<iostream>
using namespace std;

int ReverseDigit(int number){
    int rev = 0;
    while (number > 0){
        rev = rev * 10 + number % 10;
        number = number /10;
    }return rev;
}
int main(){
    int num,ans;
    cout<<"Enter number : ";
    cin>>num;
    ans = ReverseDigit(num);
    if (num == ans){
        cout<<"Entered number is palindrom";
    }
    else{
        cout<<"Not palindrome";
    }

}