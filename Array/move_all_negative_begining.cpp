#include <iostream>
using namespace std;

void moveNegatives(int arr[],int size){
    int k=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            if (i != 0){
                swap(arr[i],arr[k]);
            }k++;
        }
    }
}
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int size, array[size];
    cout << "Enter size of an array : ";
    cin >> size;
    cout << "Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout<<"array before rearranging : ";
    display(array,size);
    moveNegatives(array, size);
    cout<<endl;
    cout<<"Array after rearranging : ";
    display(array,size);
}