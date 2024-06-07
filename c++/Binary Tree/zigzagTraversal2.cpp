#include <iostream>
#include <stack>
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

// Function to perform zigzag traversal
vector<vector<int> > zigzagTraversal(Node* root) {
    vector<vector<int> > result;
    if (root == NULL) return result;

    stack<Node*> currentLevel;
    stack<Node*> nextLevel;
    bool leftToRight = true;

    currentLevel.push(root);

    while (!currentLevel.empty()) {
        vector<int> level;
        while (!currentLevel.empty()) {
            Node* node = currentLevel.top();
            currentLevel.pop();
            if (node) {
                level.push_back(node->data);
                if (leftToRight) {
                    if (node->left) nextLevel.push(node->left);
                    if (node->right) nextLevel.push(node->right);
                } else {
                    if (node->right) nextLevel.push(node->right);
                    if (node->left) nextLevel.push(node->left);
                }
            }
        }
        result.push_back(level);
        leftToRight = !leftToRight;
        swap(currentLevel, nextLevel);
    }

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

    // Perform zigzag traversal
    vector<vector<int> > traversal = zigzagTraversal(root);

    // Print the traversal
    for (int i = 0; i < traversal.size(); i++) {
    vector<int> level = traversal[i];
    for (int j = 0; j < level.size(); j++) {
        cout << level[j] << " ";
    }
    cout << endl;
}

    return 0;
}
