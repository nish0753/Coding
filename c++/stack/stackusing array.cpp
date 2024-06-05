#include<iostream>
#include<stack>
using namespace std;

class Stack{
    int size;
    int *arr;
    int top;

    public:
    Stack(){
        top =-1;
        size = 1000;
        arr = new int[size];
    }
    void push(int x){
        top++;
        arr[top]=x;

    }
    int pop(){
        int x= arr[top];
        top--;
        return x;

    }
    int Top(){
        return arr[top];
    }
    int Size(){
        return top+1;
    }

};
int main(){

    Stack s;

    s.push(6);
    s.push(7);
    s.push(8);
    cout<<" Top of stack is before deleting any elements " << s.Top() << endl;
    cout<<"Size of stack before deleting any elements " << s.Size() << endl;
    cout<<" the element deleted is " <<s.pop() <<endl;
    cout<<"Size of stack after deleting any elemnet  " << s.Size() <<endl;
    cout<< " Top of stack after deleting any elements " <<s.Top() <<endl;
    return 0;

}