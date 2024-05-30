#include <iostream>
using namespace std;

struct tree {
    int data;
    tree* left;
    tree* right;
    tree(int value) : data(value), left(NULL), right(NULL) {}
};


void preOrderTraversal(tree* node) {
    if (node == NULL) return;

    cout << node->data << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}


void inOrderTraversal(tree* node) {
    if (node == NULL) return;

    inOrderTraversal(node->left);
    cout << node->data << " ";
    inOrderTraversal(node->right);
}


void postOrderTraversal(tree* node) {
    if (node == NULL) return;

    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout << node->data << " ";
}

int main() {
    tree* root = new tree(18);
    root->left = new tree(30);
    root->right = new tree(33);
    root->left->left = new tree(29);
    root->left->right = new tree(32);
  
    
    cout<< "Traversal Pre-order: ";
    preOrderTraversal(root);
    cout<< "\nTraversal In-order: ";
    inOrderTraversal(root);  
    cout<< "\nTraversal Post-order: ";
    postOrderTraversal(root);

}

