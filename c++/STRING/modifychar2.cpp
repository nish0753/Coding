#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    int index;
    cout<<"Enter the index"<<endl;
    cin>>index;
    char ch;
    cout<<"Enter the char"<<endl;
    cin>>ch;
    cout<<" original string is"<< str<< endl;
    str.replace(index, 1,1,ch);
    cout<<"Modified string is "<< str<< endl;
}