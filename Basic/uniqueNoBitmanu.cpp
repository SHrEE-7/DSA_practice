// Write a program to print 1 unique number from array.
#include<iostream>
using namespace std;
int Unique(int arr[], int n);
int main(){  
    int arr[]={1,2,3,4,1,2,3,4,5};
    cout<<Unique(arr,9)<<endl;
    return 0;
}
int Unique(int arr[], int n){
    int xorSum=0;
    for(int i=0;i<n; i++){
        xorSum=xorSum^arr[i];
    }
    return xorSum;
}



