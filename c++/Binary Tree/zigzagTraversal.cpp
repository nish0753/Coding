#include <iostream>
#include <vector>
#include <queue>
#include <deque>
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

// Function to perform zigzag traversal using a queue
vector <vector <int> > zigzagTraversal(Node* root) {
    vector <vector <int> > result;
    if (root == NULL) return result;

    queue<Node*> q;
    bool leftToRight = true;

    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        deque<int> level; // Using deque to allow insertion at both ends

        for (int i = 0; i < size; ++i) {
            Node* node = q.front();
            q.pop();

            if (leftToRight) {
                level.push_back(node->data);
            } else {
                level.push_front(node->data);
            }

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.push_back(vector<int>(level.begin(), level.end()));
        leftToRight = !leftToRight;
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
    vector<vector <int> > traversal = zigzagTraversal(root);

    // Print the traversal
    // Print the traversal
for (int i = 0; i < traversal.size(); ++i) {
    vector<int> level = traversal[i];
    for (int j = 0; j < level.size(); ++j) {
        cout << level[j] << " ";
    }
    cout << endl;
}


    return 0;
}
