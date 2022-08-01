#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    // to arrange the string in alphabatical order add algorithm hedder file
    string str = "DomenicToretto";
    sort(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
}