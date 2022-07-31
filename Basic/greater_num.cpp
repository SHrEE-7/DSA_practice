#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    //Program to make a greater number from the given number.
    string str = "78347";
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;
    return 0;
}