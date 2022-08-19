#include<iostream>
using namespace std;
int VowelOrConsonant(char ch){
    if(ch=='a' || ch=='e' || ch=='i'||ch=='o'||ch=='u'){
        cout<<"Enterd characted is Vowel";
    }else{
        cout<<"Entered character is not consonant";
    }
    return 0;
}
int main(){
    char ch;
    cout<<"Enter Character : ";
    cin>>ch;
    VowelOrConsonant(ch);
}