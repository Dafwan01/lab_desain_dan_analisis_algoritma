#include <iostream>
#include <vector>

using namespace std;

struct Edge {
    int dest;
    int weight;
};

class Graph {
private:
    int V;
    vector<vector<Edge> > adj;

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v, int w) {
        Edge edge;
        edge.dest = v;
        edge.weight = w;
        adj[u].push_back(edge);
    }

    void printAdjacencyList() {
        cout << "Daftar Ketetanggaan (Graf Berbobot):" << endl;
        for (int i = 0; i < V; ++i) {
            cout << "Simpul " << i << ":";
            for (size_t j = 0; j < adj[i].size(); ++j) {
                cout << " (" << adj[i][j].dest << ", " << adj[i][j].weight << ")";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph graph(5);
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 4, 20);
    graph.addEdge(1, 2, 30);
    graph.addEdge(1, 3, 40);
    graph.addEdge(1, 4, 50);
    graph.addEdge(2, 3, 60);
    graph.addEdge(3, 4, 70);
    graph.printAdjacencyList();
    return 0;
}

