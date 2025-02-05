#include <iostream>
#include <vector>

using namespace std;

class Graph {
    int vertices;
    vector<vector<int>> adjlist;

public:
    Graph(int vertices) {
        this->vertices = vertices;
        adjlist.resize(vertices);
    }

    void addEdge(int src, int dest) {
        adjlist[src].push_back(dest);
        adjlist[dest].push_back(src);
    }

    void display() {
        for (int i = 0; i < vertices; i++) {
            cout << i << "-->";
            for (int n : adjlist[i]) {
                cout << n << " ";
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
