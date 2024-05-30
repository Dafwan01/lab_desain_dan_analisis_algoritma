#include <iostream>
using namespace std;

const int MAX_NODE = 100; 

int tree[MAX_NODE];
int n;

void insert(int x){
    int cur = 0;
    while(tree[cur] != -1){
        if(x < tree[cur]){
            cur = 2 * cur + 1;
        }
        else{
            cur = 2 * cur + 2;
        }
    }
    tree[cur] = x;
    n++;
}

void inorder(int c){
    if(tree[c] != -1){
        inorder(2 * c + 1);
        cout << tree[c] << " ";
        inorder(2 * c + 2);
    }
}

int main(){
    for(int i = 0; i < MAX_NODE; i++){
        tree[i] = -1;
    }
    n = 0;
    int x;
    char pilih;
    	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);

//    do{
//        cout << "masukan nilai: ";
//        cin >> x;
//        insert(x);
//        cout << "ingin masukan lagi (y/n)? ";
//        cin >> pilih;
//    } while(pilih == 'y' || pilih == 'Y');
    
    cout << "inorder traversal: ";
    inorder(0);
    cout << endl;
    
    return 0;
}

