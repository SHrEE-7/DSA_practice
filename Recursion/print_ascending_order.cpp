#include <iostream>
using namespace std;
// printing ascending order of given number
void dece(int n)
{
    if (n == 0)
    {
        return;
    }
    dece(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    dece(n);
}