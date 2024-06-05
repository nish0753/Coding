#include<iostream>
#include<string>
using namespace std;
char findTheIndex(string str, int k)
{
    return str[k];
}
int main(){
    string str("GeeksforGeeks");
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    cout<<findTheIndex(str,k)<<endl;
    return 0;

}