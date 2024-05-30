#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        
        
        Node(int value) {
            data = value;
            left = NULL;
            right = NULL;
        }
};

class Tree {
    public:
        Node* root;
        
        Tree() {
            root = NULL;
        }
        
        void insert(int v) {
            root = insert(root, v);
        }
        
        Node* insert(Node* node, int value) {
            if (node == NULL) {
                return new Node(value);
            }
            if (value <= node->data) {
                node->left = insert(node->left, value);
            } else {
                node->right = insert(node->right, value);
            }
            return node;
        }
        
        void inorder() {
            inorder(root);
        }
        
        void inorder(Node* node) {
            if (node == NULL) return;
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
};

int main() {
    Tree t;
    t.insert(10);
    t.insert(5);
    t.insert(15);
    t.inorder();
    return 0;
}

