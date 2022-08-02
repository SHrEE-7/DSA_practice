#include <iostream>
using namespace std;
int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);
    return (c1 + c2 - c3);
}
int main()
{
    int n, a, b;
    cout << "Enter the number up to which we have to find division count\n";
    cin >> n;
    cout << "Now enter the numbers\n";
    cin >> a >> b;
    cout << divisible(n, a, b) << " numbers are divisible by " << a << " and " << b << endl;
}