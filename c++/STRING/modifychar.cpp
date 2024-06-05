#include<iostream>
#include<string>
using namespace std;
int main(){
    //get the string
    string str="Geeks Gor Geeks";
    //enter the index
    int k=6;
    //get the char
    char ch='F';
    //print original string
    cout<<"Original string is :"<< str << endl;
    str.replace(k,1,1,ch);
    //Print the modified string
    cout<<"Modified string is "<< str <<endl;
    return 0;

}