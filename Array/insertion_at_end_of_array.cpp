#include<iostream>
using namespace std;

int insertionatEnd(int *array,int key,int capacity,int n){
    if (n>=capacity){
        return 0;
    }
    array[n]=key;
    return (n+1);
}

int main(){
    int element,arr[15]={12,45,87,6,5,23,78};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int no_of_ele = 7;
    cout<<"\nBefore insertion : ";
    for (int i=0;i<no_of_ele;i++){
        cout<< arr[i]<<" ";
    }
    cout<<"\nEnter element : ";
    cin>>element;
    int n =insertionatEnd(arr,element,capacity,no_of_ele);
    //array after insertion
    cout<<"\n After insertion : ";
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}