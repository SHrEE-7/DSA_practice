#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    // To convert upper case into lower and lower to upper
    string str = "shrEekumar";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
    
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout<<str<<endl;
    return 0;
}