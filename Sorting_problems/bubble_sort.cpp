#include <iostream>
using namespace std;
void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void BubbleSort(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[i])
            {
                swap(array[i], array[j]);
            }
        }
    }
}
int main()
{
    int size, arr[size];
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, size);
    BubbleSort(arr, size);
    cout << endl;
    cout << "Array after Sorting: ";
    display(arr, size);
}