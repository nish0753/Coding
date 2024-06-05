#include<iostream>
using namespace std;

struct stackNode{
    int data;
    stackNode *next;
    int size;
    stackNode(int d){
        data = d;
        next = NULL;
    }

};
struct stack {
    stackNode* top;
    int size;
    stack(){
        top = NULL;
        size =0;

    }
    void stackPush(int x){
        stackNode* element = new stackNode(x);
        element->next = top;
        top = element;

        cout<<" Element Pushed" << endl;
        size++;

    }
    int stackPop()
{
    if(top == NULL){
        return -1;
    }
    int topData = top->data;
    stackNode* temp = top;
    top = top->next;
    delete temp;
    size--;
    return topData;
}
int stackSize(){
    return size;
}
bool stackisEmpty(){
    return top == NULL;
}
int stackPeek(){
    if (top == NULL){
        return -1;
    }
    return top->data;
}
void printStack(){
    stackNode* current = top;
    while(current != NULL){
        cout<< current->data << endl;
        current = current ->next;
    }
}

};

int main(){
    stack s;
    s.stackPush(10);
    s.stackPush(20);
    s.stackPush(100);
    cout<<"Element popped:" << s.stackPop() <<endl;
    cout<<" Stack size: " << s.stackSize()<<endl;
    cout<<" Is stack empty :" <<s.stackisEmpty()<<endl;
    cout<< " stack top elemnt:" << s.stackPeek()<<endl;
    return 0;
}
