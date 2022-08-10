#include<iostream>
using namespace std;
int main(){
    int x=10, y=20; 
    cout<<"before swapping : "<<"x="<<x<<" "<<"y="<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After swapping : "<<"x="<<x<<" "<<"y="<<y;
    return 0;
}