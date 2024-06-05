#include<iostream>
#include<string>
using namespace std;

void insertString(string str ,string ch, int k)
{
    //insert str at kth place
    str.insert(k,ch);
    cout<<"Modified String is:"<<str<< endl;
}

int main(){
    string str("GeeksGeeks");
    string ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    int k;
    cout<<"Enter the value of K"<<endl;
    cin>>k;
    cout<<"original String :"<< str <<endl;
    insertString(str,ch,k);
    return 0;
}