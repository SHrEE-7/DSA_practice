#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter no of rows till we need a nubers\n";
    cin>>row;
    int count=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }cout<<endl;
    }
}