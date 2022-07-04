// insertion at the begining of an array.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={15,14,23,44};
    //printing array before insertion
    cout<<"Array before insertion of element :";
    for(int i=0;i<4;i++){
        cout<< arr[i]<<" ";
    }
    //shifting elements to right side
    for(int i=4;i>=0;i--){
        arr[i+1] = arr[i];
    }
    cout<<endl;
    //add element at first position
    int element;
    cout<<"Enter element :";
    cin>>element;
    arr[0]=element;
    // array after insertion.
    cout<<"Array after insertion of element :";
    for(int i=0;i<5;i++){
        cout<< arr[i]<<" ";
    }
}