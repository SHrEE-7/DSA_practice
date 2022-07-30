#include <iostream>
using namespace std;
// printing decending order of given number
void dece(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    dece(n - 1);
}
int main()
{
    int n;
    cout<<"Enter number : ";
    cin >> n;
    dece(n);
}