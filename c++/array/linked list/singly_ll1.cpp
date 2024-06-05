#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;

    }
};
void insertAtHead(node* &head, int data ){
    node* n= new node(data);
    n->next= head;
    head=n;
}
void print(node* head)
{
    while (head!= NULL){
        cout<< head->data <<"->"<<endl;
        head=head->next;

    }   
}

int main(){
    node* head=NULL;
    insertAtHead(head ,5);
    insertAtHead(head ,2);
    insertAtHead(head ,8);
    insertAtHead(head ,3);
    print(head);


}