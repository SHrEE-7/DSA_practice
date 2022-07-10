#include <iostream>
using namespace std;

int findMax(int array[], int size)
{
    int max_ele = array[0];
    for (int i = 0; i < size; i++)
    {
        max_ele = max(max_ele, array[i]);
    }
    return max_ele;
}
int findMin(int array[], int size)
{
    int min_ele = array[0];
    for (int i = 0; i < size; i++)
    {
        min_ele = min(min_ele, array[i]);
    }
    return min_ele;
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
    cout << "Max element in array : " << findMax(arr, size) << endl;
    cout << "Min element in array : " << findMin(arr, size) << endl;
    return 0;
}