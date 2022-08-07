#include <iostream>
#include <string>
using namespace std;
int binary_to_decimal(string num)
{
    int deci_value = 0, base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
        {
            deci_value += base;
        }
        base = base * 2;
    }
    return deci_value;
}
int main()
{
    char num[50];
    cout << "Enter binary number : ";
    cin >> num;
    cout << "equivalent decimal value is : "<<binary_to_decimal(num) << endl;
}