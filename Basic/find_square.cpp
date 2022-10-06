#include<iostream>
#include<math.h>
using namespace std;
int CalSquare(int num){
    return num * num;
}
int main(){
    int num,square;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Square of "<<num<<" is "<<CalSquare(num);
}