#include <iostream>
using namespace std;

// finding fibonacci number
int fibonacci(int a)
{
    if (a == 0 || a == 1)
    {
        return a;
    }
    return fibonacci(a - 1) + fibonacci(a - 2);
}
int main()
{
    int a;
    cout<<"Enter number : ";
    cin >> a;
    cout << fibonacci(a) << endl;
}