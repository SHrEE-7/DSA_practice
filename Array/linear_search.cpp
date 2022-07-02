# include<iostream>
using namespace std;

int LinearSearch(int arr[],int size, int key){
    for (int i=0;i<size;i++){
        if (arr[i]==key)
        return i;
    }return -1;
}
int main()
{
    int i, size, array[size];
    cout << "Enter size of an array\n";
    cin >> size;
    cout << "Enter elements of array\n";
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int key;
    cout << "enter a key\n";
    cin >> key;
    cout<< key <<" Present at index : ";
    cout<<LinearSearch(array,key,size)<<endl;
}