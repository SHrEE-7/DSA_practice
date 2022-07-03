// printing matrix 
#include<iostream>
using namespace std;
int main(){
    int col, row;
    cout<<"Enter number of rows and columns\n";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}