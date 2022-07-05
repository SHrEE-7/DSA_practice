#include<iostream>
using namespace std;
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int FindElement(int array[],int size,int key){
    for(int i=0;i<size;i++){
        if (array[i]==key){
            return i;
        }
    }return -1;
}
int ElementDelete(int array[], int size,int key){
    int pos = FindElement(array,size,key);
    if (pos==-1){
        cout<<"Element not found..";
        return size;
    }
    else{
        for(int i=pos;i<size-1;i++){
            array[i]=array[i+1];
        }return size-1;
    }
}
int main (){
    int no_of_elements, arr[]={45,65,78,98,12,52};
    no_of_elements = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Array before deletion : ";
    display(arr,no_of_elements);
    cout<<endl;
    cout<<"Which element you want to delete? Enter here : ";
    cin >> key;
    int deleted_element = ElementDelete(arr,no_of_elements,key);
    cout<<"Array after deletion : ";
    for(int i=0;i<no_of_elements-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}