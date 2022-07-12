#include <iostream>
using namespace std;
void EvenOddSegregation(int arr[], int size)
{
    int p=-1;
    for (int i=0;i<size;i++){
        if (arr[i] % 2 == 0){
            p++;
            swap(arr[i],arr[p]);
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
    int size, arr[size];
    cout << "Enter size of an array : ";
    cin >> size;
    cout << "enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before segregation : ";
    display(arr, size);
    cout << endl;
    EvenOddSegregation(arr, size);
    cout << "Array after segregation : ";
    display(arr, size);
    return 0;
}