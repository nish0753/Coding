#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Helper function to create a new node
Node* newNode(int data) {
    Node* node = new Node(data);
    return node;
}

// Function to check if a node is a leaf node
bool isLeaf(Node* node) {
    return (node->left == NULL && node->right == NULL);
}

// Function to add left boundary nodes (excluding leaf nodes)
void addLeftBoundary(Node* root, vector<int>& result) {
    Node* curr = root->left;
    while (curr) {
        if (!isLeaf(curr)) result.push_back(curr->data);
        if (curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

// Function to add leaf nodes
void addLeaves(Node* root, vector<int>& result) {
    if (isLeaf(root)) {
        result.push_back(root->data);
        return;
    }
    if (root->left) addLeaves(root->left, result);
    if (root->right) addLeaves(root->right, result);
}

// Function to add right boundary nodes (excluding leaf nodes)
void addRightBoundary(Node* root, vector<int>& result) {
    Node* curr = root->right;
    vector<int> tmp;
    while (curr) {
        if (!isLeaf(curr)) tmp.push_back(curr->data);
        if (curr->right) curr = curr->right;
        else curr = curr->left;
    }
    for (int i = tmp.size() - 1; i >= 0; --i) {
        result.push_back(tmp[i]);
    }
}

// Function for boundary traversal
vector<int> boundaryTraversal(Node* root) {
    vector<int> result;
    if (root == NULL) return result;

    if (!isLeaf(root)) result.push_back(root->data);
    
    addLeftBoundary(root, result);
    addLeaves(root, result);
    addRightBoundary(root, result);

    return result;
}

int main() {
    // Constructing the binary tree
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->right->left = newNode(8);
    root->left->right->right = newNode(9);
    root->right->left->left = newNode(10);
    root->right->left->right = newNode(11);

    // Perform boundary traversal
    vector<int> traversal = boundaryTraversal(root);

    // Print the traversal
    for (int value : traversal) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
