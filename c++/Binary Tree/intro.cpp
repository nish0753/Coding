#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
//constructor
node (int d){
    this->data = d;
    this->left  = NULL;
    this->right = NULL;  
}
};
//create a function to build a tree
node* buildTree(node* root){

    cout<< "Enter the data"<<endl;

    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }
    cout<< "Enter data for inserting in left of "<< data << endl;
    root->left = buildTree(root->left);
    cout<<" Enter data for inserting in right of " <<data << endl;
    root->right  = buildTree(root->right);
    return root;
}
void levelOrdertraversal(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);//to seperate the level 
    while(!q.empty()){
        node* temp = q.front();
        
        q.pop();

        if(temp == NULL){//purana level complete ho chuka hai 
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data << endl;

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    }

}
void Inorder(node* root){
    //base case
    if(root== NULL){
        return;
    }
    Inorder(root->left);
    cout<< root->data <<" ";
    Inorder(root->right);
}
void preorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    cout<< root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<< root->data <<" ";

}
void reverselevelorder(node * root){
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<< temp->data <<" ";
        if(temp->right){
            q.push(temp->right);

        }
        if(temp->left){
            q.push(temp->left);
        }

    }
}
int main(){
    node* root = NULL;
    //creating a tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //level order traversal
    cout<<" Printing the level order traversal"<<endl;
    levelOrdertraversal(root);

    cout<<" Printing inorder traversal"<< endl;
    Inorder(root);
    cout << endl;

    cout<<" Printing the preorder traversal"<< endl;
    preorder(root);
    cout<< endl;

    cout<<" Printing the postorder traversal" <<endl;
    postorder(root);

    cout<<" Printing the reverse level order traversal" <<endl;
    reverselevelorder(root);


    return 0;
}

