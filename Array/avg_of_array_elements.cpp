#include <iostream>
using namespace std;

float AvgOfElements(int *array, int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    float avg = sum / size;
    return avg;
}

int main()
{
    int size, arr[size];
    cout << "Enter size of array : ";
    cin >> size;
    cout << "Enter array Elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    float avg = AvgOfElements(arr, size);
    cout << "The avg of entered elements is : " << avg;
}