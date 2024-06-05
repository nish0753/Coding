#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

};
//traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp ->data <<endl;
        temp = temp -> next;
    }
    cout<< endl;
}
//gives length of the linked list
int getLength(Node* head){
    int len =0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp =temp -> next;
    }
    return len;
}
void insertAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;


}
void insertionAttail(Node* &tail, int data){
    Node* temp =new Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
void insertAtPosition(Node* & tail, Node* &head, int position,int data){
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
    temp ->next ->prev = NodeToInsert;
    temp -> next = NodeToInsert;
    NodeToInsert -> prev = temp;
}

int main(){

    Node* node1 = new Node(10);
    Node* head =node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 17);
    print(head);
   
    insertAtHead(head, 19);
    print(head);

    insertionAttail(tail , 23);
    print (head);

    insertAtPosition(tail,head, 3,34);
    print(head);

    insertAtPosition(tail,head, 1,100);
    print(head);

      insertAtPosition(tail,head, 7,102);
    print(head);
     cout<< getLength(head) << endl;

    return 0;


}