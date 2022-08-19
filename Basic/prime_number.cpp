#include <iostream>
#include <math.h>
using namespace std;
void isprime(int n)
{
    if (n <= 1)
        cout << "Not prime";
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime";
            break;
        }else{
        cout<<"Prime Number";
        break;    }
    }
}
int main()
{
    int num;
    cout << "Enter positive Integer : ";
    cin >> num;
    isprime(num);
}