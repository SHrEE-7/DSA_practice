#include<iostream>
#include<string>
using namespace std;
int main(){
    //empty function in string
    string s1 = "abc";
    cout<<s1<<endl;
    s1.clear();
    if(s1.empty())
    cout<<"string is empty\n";
}
