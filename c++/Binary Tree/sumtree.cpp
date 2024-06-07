#include <iostream>
using namespace std;

// Definition for a binary tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    pair<bool, int> isSumTreeFast(Node* root) {
        if (root == NULL) {
            // If the node is NULL, it is considered a Sum Tree with sum 0
            return make_pair(true, 0);
        }
        
        if (root->left == NULL && root->right == NULL) {
            // If the node is a leaf node, it is considered a Sum Tree with sum equal to its data
            return make_pair(true, root->data);
        }
        
        // Recursively check the left and right subtrees
        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);
        
        // Check if the left and right subtrees are Sum Trees
        bool left = leftAns.first;
        bool right = rightAns.first;
        
        // Check if the current node satisfies the Sum Tree property
        bool condition = root->data == (leftAns.second + rightAns.second);
        
        pair<bool, int> ans;
        
        if (left && right && condition) {
            // If the current node and its subtrees satisfy the Sum Tree property
            ans.first = true;
            ans.second = root->data + leftAns.second + rightAns.second;
        } else {
            // If any condition is not met, it is not a Sum Tree
            ans.first = false;
        }
        
        return ans;
    }
    
    bool isSumTree(Node* root) {
        return isSumTreeFast(root).first;
    }
};

// Helper function to create a new node
Node* newNode(int data) {
    Node* node = new Node(data);
    return node;
}

int main() {
    Solution sol;

    // Constructing the binary tree
    Node* root = newNode(26);
    root->left = newNode(10);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(6);
    root->right->right = newNode(3);

    // Check if the tree is a Sum Tree
    if (sol.isSumTree(root)) {
        cout << "The tree is a Sum Tree" << endl;
    } else {
        cout << "The tree is not a Sum Tree" << endl;
    }

    return 0;
}
