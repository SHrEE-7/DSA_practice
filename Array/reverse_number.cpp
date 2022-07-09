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
    cout<< "The reversed number is : "<<ans;

}
