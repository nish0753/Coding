#include<iostream>
#include<string>
using namespace std;
int main(){
    string str=("GeeksForGeeks");
    int k=6;
    cout<<"original string is "<<str<< endl;
    str.erase(k,2);
    cout<<" modified string is "<< str << endl;
    return 0;
}
