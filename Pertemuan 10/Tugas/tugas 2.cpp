#include <iostream>
#include <vector>

using namespace std;

class graph {
private:
    int juml;
    vector<vector<int> > linklist;

public:
    graph(int simpul) : juml(simpul), linklist(simpul) {}

    void tambah(int x, int y) {
        if (x >= 0 && x < juml && y >= 0 && y < juml) {
            linklist[x].push_back(y);
            if (x != y) 
                linklist[y].push_back(x);  
        } else {
            cout << "Input simpul tidak valid!" << endl;
        }
    }

    void print() {
        for (int i = 0; i < juml; i++) {
            cout << "Simpul " << i << ":";
            for (int j = 0; j < linklist[i].size(); j++) {
                if (j == 0) {
                    cout << " " << linklist[i][j];
                } else {
                    cout << " -> " << linklist[i][j];
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int simpul = 5;
    graph link(simpul);
    link.tambah(0, 1);
    link.tambah(0, 4);
    link.tambah(1, 2);
    link.tambah(1, 3);
    link.tambah(1, 4);
    link.tambah(2, 3);
    link.tambah(3, 4);
    link.print();
}

