#include<iostream>
#include<math.h>
using namespace std;
int CalSqrt(int num ){
    return sqrt(num);
}
int main(){
    int num,sqrt;
    cout<<"Enter Number : ";
    cin>>num;
    cout<<"Square root of"<<" "<<num<<" "<<"is"<<" "<<CalSqrt(num);
}