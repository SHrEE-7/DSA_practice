#include <iostream>
using namespace std;
// Finding sum of n numbers using recursion.
int Sum(int n){
    if (n==0){
        return 0;
    }
    int prevsum=Sum(n-1);
    return n+prevsum;
}
int main(){
    int n;
    cout<<"enter the number up to which find the sum\n";
    cin>>n;
    cout<<"Sum is "<<Sum(n)<<endl;
}
