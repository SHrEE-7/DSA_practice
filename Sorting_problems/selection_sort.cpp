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
void SelectionSort(int *array, int size)
{
    int i, j, i_min;
    for (i = 0; i < size - 1; i++)
    {
        i_min = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[i_min])
            {
                i_min = j;
                swap(array[i], array[i_min]);
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
    SelectionSort(arr, size);
    cout << endl;
    cout << "Array after Sorting: ";
    display(arr, size);
}