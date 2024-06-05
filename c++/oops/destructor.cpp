#include<iostream>
using namespace std;

class Employee{
  public:
  Employee(){
    cout<<"Constructor invoked" <<endl;
  }
  ~Employee(){
    cout<< " Destructor invoked "<<endl;

  }
};
int main(){
    Employee e1;
    Employee e2;

    return 0;
}