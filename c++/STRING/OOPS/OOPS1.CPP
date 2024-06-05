#include<iostream>
using namespace std;

class hero{

    //properties
    public:
    int health;
    char level;

    void print(){
        cout << level << endl;
    }
};
int main(){

    //creation of Object

    hero ramesh;

    ramesh.health=70;
    ramesh.level='A';

    cout<<"health is:" <<ramesh.health <<endl;
    cout<<"level is :" <<ramesh.level <<endl;
    return 0;
}