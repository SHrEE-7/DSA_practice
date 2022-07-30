#include<iostream>
using namespace std;
// finding factorial using recursion
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial (n-1);
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"factorial of " <<n <<" is "<<factorial(n)<<endl;
    return 0;
}