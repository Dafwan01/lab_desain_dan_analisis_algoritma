#include <iostream>
using namespace std;

struct tree {
    int data;
    tree* left;
    tree* right;
    tree(int value) : data(value), left(NULL), right(NULL) {}
};

int main() {
  
    tree* root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
  
    cout << "Nilai simpul-simpul pohon: " << endl;
    cout << "akar: " << root->data << endl;
    cout << "anak kiri dari akar: " << root->left->data << endl;
    cout << "anak kanan dari akar: " << root->right->data << endl;
    cout << "anak kiri dari kiri dari akar: " << root->left->left->data << endl;
    cout << "anak kanan dari kiri dari akar: " << root->left->right->data << endl;
    
   delete root->left->left;
   delete root->left->right;
   delete root->left;
   delete root->right;
   
}
