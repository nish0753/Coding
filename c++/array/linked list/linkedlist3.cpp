#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
    this -> data= data;
    this -> next =NULL;
    }


};
//Insertion At head
void insertAtHead(Node* &head, int d){
    //new node creation
    Node* temp=new Node(d);
    temp -> next =head;
    head = temp;
    }
    void insertAtTail(Node* &tail, int d){
        //new node creation
        Node* temp =new Node(d);
        tail -> next = temp;
        tail = tail ->next;
    }
    void print(Node* &head){
       Node* temp=head;

       while(temp != NULL){
        cout << temp -> data <<" ";
        cout << temp -> next ;
       }
       cout << endl;
    }
    void InsertAtPosition( Node* &head, int position, int d){
        Node* temp = head;
        int cnt=1;

        while(cnt < position-1){
            temp = temp ->next;
            cnt++;

        }
        //creating a node for d
        Node* nodeToInsert = new Node(d);
        nodeToInsert ->next =temp ->next;
        temp ->next = nodeToInsert;


    }
int main(){
    //created a new node
    Node* node1=new Node(10);
    //cout<< node1 -> data <<endl;
    //cout<< node1 -> next <<endl;
//head pointed to node 1
    Node* head =node1;
    Node* tail = node1;
    print (head);

    insertAtTail(head,12);

    print(head);

     insertAtTail(head ,15);

    print(head);

    InsertAtPosition(head,1,22);
    print(head);
    

    return 0;


}
