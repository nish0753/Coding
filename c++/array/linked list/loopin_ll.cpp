#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
    this -> data = data;
    this  -> next = NULL;
    }

};
//Function to create a linked list
Node* newNode(int data){
Node* temp = new Node(8);
  temp-> data = data;
    temp-> next =NULL;
    return temp;
}
//decleration of map to to keep 
//mark of visited node 
map<Node*, bool> vis;
bool flag = 0;
// Function to check cycle in Linked
void checkCycle(Node* head){
    if(head == NULL){
        flag =0;
        return;
    }
     // Mark the incoming Node as
    // visited if it is not visited yet
    if (!vis[head]) {
        vis[head] = true;
        checkCycle(head->next);
    }
     // If a visited Node is found
    // Update the flag value to 1
    // and return ;
    else {
        flag = 1;
        return;
    }

}

int main(){
    //create a head node
    Node* head=  newNode(20);

//inserting a node in a linked list
head->next = newNode(4);
head->next->next = newNode(5);
head->next->next = newNode(10);
 // Just to make a cycle
    head->next->next->next->next = head;

    checkCycle(head);

     // If flag is true, loop is found
    if (flag)
        cout << "Loop detected.";
          // detected
    else
        cout << "No Loop Found.";
    cout << endl;
 
    return 0;
}