#include<iostream>
using namespace std;
//constructor 
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //constructor for initalization of a node with data
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }
    //helper function to create a new node 
   Node* newNode(int data) {
    Node* node = new Node(data);
    return node;
}
};
//function to check if a binary tree is sum tree or not
int check(Node* root , bool &f){
    //base case
    if(root == NULL){
        return 0;
    }

    //recursively check the left and right subTee
    int l = check(root->left , f);
    int r = check(root->right , f);

    //if the current node is a leaf node 

    if(l ==0 && r == 0) {
        return root->data;
    }
    //if the sum of left and right subtree is not equal to the current  node

    if(l+r != root->data){
        f = false;//Mark the Tree as not a sum tree
        return -1;//Return as invalid sum
    }
    else{
        //return the sum of current node and the subtree
        return l+r+root->data;
    }
}
    bool isSumTree(Node* root){
        bool f = true; // initialise a flag to indicate that the tree is a sum tree
        check(root , f); //function call
        return f; //return the result;
    }



int main(){

     // Constructing the binary tree
    Node* root = new Node(26);
    root->left = new Node(10);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right->right = new Node(3);

    // Check if the tree is a Sum Tree
    if (isSumTree(root)) {
        cout << "The tree is a Sum Tree" << endl;
    } else {
        cout << "The tree is not a Sum Tree" << endl;
    }

    return 0;

}