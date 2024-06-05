#include<iostream>
#include<string>
using namespace std;
void insertchar(string str, string ch, int k){
    str.insert(k,ch);
    cout<<"Modified string is:"<< str <<endl;
}
int main(){
    string str=("geeksforgeeks");
    string ch;
    cout<<"Enter the char"<<endl;
    cin>>ch;
    int k=10;
    cout<<"Original string is:-"<< str <<endl;
    insertchar(str,ch,k);
    return 0;
}