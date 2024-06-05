#include<iostream>
#include<string>
using namespace std;
char accessCharByIndex(string str, int k)
{
    return str[k];
}
int main(){
    string str ("Nishant");
    int k;
    cout<<"Enter the value of K"<<endl;
    cin>>k;
    cout<<accessCharByIndex(str,k) <<endl;
    return 0;
}