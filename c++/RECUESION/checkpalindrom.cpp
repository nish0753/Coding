#include<iostream>
using namespace std;

bool checkPalindrom(string &str,int i,int j){

    //base case
    if(i>j)
    return true;
    if(str[i]!=str[j])
    return false;
    else{
        //recursive call
        return checkPalindrom(str,i+1, j-1);
    }
}

int main(){

string name="bookkoob";
cout<< endl;

bool ispalindrom=checkPalindrom(name,0,name.length()-1);
if(ispalindrom){
    cout<<" it is a palindrom "<< endl;
}
else{
    cout<<" its not a palindrom "<< endl;
}
return 0;

}