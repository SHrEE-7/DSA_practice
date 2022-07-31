#include <iostream>
#include <string>
using namespace std;

int main()
{

    // erase function in string
    string s1 = "nincompoop";
    s1.erase(3, 3);
    cout << s1 << endl;
}