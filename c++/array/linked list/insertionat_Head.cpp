#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node( int data){
        this -> data =data;
        this -> next = NULL;
    }

};
//Insertion at tail

//Insertion at head
void insertAtHead(Node* &head, int d)
{
    //create new node
    Node* newNode = new Node(d);
    newNode -> next =head;
    head =newNode;
}
void print(Node* &head){
    Node* newNode =head;
    while(newNode ->next!=NULL){
        cout << newNode -> data <<" "<<endl;
        cout << newNode -> next << endl;
        newNode = newNode -> next;
    }
    
    cout << endl;
    

}
int main(){

    Node* node1= new Node(10);
    cout<< node1 -> data << endl;
    cout<< node1 -> next << endl;

    Node* head=node1;
    print(head);

    insertAtHead(head,12);
    print (head);
    return 0;

}