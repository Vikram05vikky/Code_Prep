#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int vertices;
    vector<vector<int>> adjMatrix;

public:
    Graph(int vertices) {
        this->vertices = vertices;
        adjMatrix.resize(vertices, vector<int>(vertices, 0));
    }

    void addEdge(int src, int dest) {
        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1;
    }

    void display() {
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int V, E;
    cin >> V >> E;
    Graph g(V);

    for (int i = 0; i < E; i++) {
        int src, dest;
        cin >> src >> dest;
        g.addEdge(src, dest);
    }
    
    g.display();
    return 0;
}
