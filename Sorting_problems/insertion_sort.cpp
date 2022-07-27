#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    int key,j;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    int i, size, array[size];
    cout << "Enter size of an array\n";
    cin >> size;
    cout << "Enter elements of array\n";
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    // original array
    cout << "Array before Sorting: ";
    display(array, size);
    cout << endl;
    insertionSort(array,size);
    cout<<"Array after Sorting: ";
    display(array,size);
}