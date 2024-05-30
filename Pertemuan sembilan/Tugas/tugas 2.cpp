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
  int a,b,c,d,e;
  	cout<<"Masukan root ";
  	cin>>a;
  	cout<<"Masukan data ";
  	cin>>b;
  	cout<<"Masukan data ";
  	cin>>c;
  	cout<<"Masukan data ";
  	cin>>d;
  	cout<<"Masukan data ";
  	cin>>e;
  	
  
    tree* root = new tree(a);
    root->left = new tree(b);
	root->right = new tree(b);
    root->left->right = new tree(d);
    root->right->right = new tree(e);
    
     cout<< "Traversal Pre-order: ";
    preOrderTraversal(root);
    cout<< "\nTraversal In-order: ";
    inOrderTraversal(root);  
    cout<< "\nTraversal Post-order: ";
    postOrderTraversal(root);
  
}
