#include<iostream>
using namespace std;

class student{
    public:
    int id;//data for students
     string name ;
     float salary;
     void insert(int i, string n, float s){
        id =i;
        name =n;
        salary = s;
     }
     void display(){
        cout<< id << " " << name << " " << salary << endl;
     }
};

int main(){
    student s1;//creating an object of students
    student s2;
   s1.insert(101,"Nishant",90000);
   s2.insert(102,"Rahul",100000);
   s1.display();
   s2.display();
   return 0;
}
