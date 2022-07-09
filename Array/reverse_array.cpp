#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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
    cout<<"original array is : ";
    display(array, size);
    reverseArray(array, 0, size - 1);
    cout << endl;
    // array after reversal
    cout << "Reversed array is : ";
    display(array, size);
}