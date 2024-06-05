#include<iostream>
#include<stack>
//#define n= 100;

using namespace std;
class Stack{
    int* arr;
    int top;
    public:
    Stack(){
        arr = new int[100];
        top =-1;
    }
    //push operaton
    void push(int x){
        if(top== 100-1){
        cout<<"satck overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
    }

    //pop operation
    void pop(int x){
        if(top ==-1){
            cout<<" stack is empty"<<endl;
            return;
        }
        top--;
    }
    //top function
    int Top(){
        if(top ==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top ==1;
    }


};

int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<< st.Top()<<endl;

    st.pop(1);
    st.pop(1);
    st.pop(1);
    st.pop(1);
   cout<< st.Top()<<endl;

   cout<<st.empty()<<endl;
    return 0;

}