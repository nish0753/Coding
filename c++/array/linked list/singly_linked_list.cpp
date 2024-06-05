#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
//Constructor
Node(int data){

this -> data = data;
this -> next = NULL;
}
//destructor
~Node(){
    int Value = this -> data;
    //Memory Free
    if(this -> next == NULL){
        delete next;
        this -> next =NULL;
    }
    cout<<" Memory is free for node with data "<<Value <<endl;
}
};
void insertAtHead(Node* &head, int data){
    //new node creation
    Node* temp= new Node(data);
    temp ->next=head;
    head = temp;
}
void insertionAttail(Node* &tail, int data){
    //new node creation 
    Node* temp= new Node(data);
    tail ->next= temp;
    tail =temp;

}
void insertAtPosition( Node* &tail,Node* &head, int position, int data){
    if(position ==1){
        insertAtHead(head ,data);
        return ;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt < position-1){
        temp =temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp -> next == NULL){
        insertionAttail(tail ,data);
         return ;

    }
    //creating a node for data
    Node* NodeToInsert =new Node(data);
    NodeToInsert -> next =temp -> next;
    temp ->next= NodeToInsert;



}
void deletenode(int position, Node* &head){
    //deleting first or starting node 
    if(position ==1){
        Node* temp =head;
        head =head ->next;
        //memory free of starting node
        temp -> next =NULL;
        delete temp;
    }
    else{
        //deleting middle or last node
        Node* Curr =head;
        Node* prev =NULL;
        int cnt =1;
        while(cnt <= position){
            prev =Curr;
            Curr =Curr ->next;
            Curr -> next =NULL;
            cnt++;

        }
        prev -> next =Curr-> next;
        Curr -> next=NULL;
        delete Curr;
    }
}
//traversing a linked list
void print(Node* &head){
    Node* temp= head;
    while(temp != NULL){
        cout<< temp -> data <<" "<<endl;
        temp =temp ->next;

    }
    cout<< endl;
}

int main(){
    Node* node1= new Node(10);
    //cout<< node1 -> data <<endl;
    //cout<< node1 -> next << endl;
    //head pointed to node 1
    Node* head=node1;
    Node* tail =node1;
    print(head);

    insertionAttail(tail, 12);

    print(head);


    insertionAttail(tail, 15);
    print(head);

    insertAtPosition(tail,head,4,22);
    print (head);

    cout<< head -> data<< " "<<endl;
    cout << tail -> data<<  " "<<endl;
    deletenode(4,head);
    print(head);

    return 0;
    


}