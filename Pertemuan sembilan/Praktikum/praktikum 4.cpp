#include <iostream>
using namespace std;
const int MAX_AR=5;
struct tree {
    int data;
    tree* left;
    tree* right;
    tree(int value) : data(value), left(NULL), right(NULL) {}
};

int main() {
  	 int pohon[MAX_AR]={1,2,3,4,5};
    tree* root = new tree(pohon[0]);
    root->left = new tree(pohon[1]);
    root->right = new tree(pohon[2]); 
    root->left->left = new tree(pohon[3]);
    root->left->right = new tree(pohon[4]);
  
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
