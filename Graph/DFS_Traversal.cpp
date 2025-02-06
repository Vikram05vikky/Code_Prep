#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {
public:
    int vertices;
    vector<vector<int>> adjlist;

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


    void dfsUtil(int node, vector<bool>& visited) {
        visited[node] = true;
        cout << node << " ";

        for (int neighbor : adjlist[node]) {
            if (!visited[neighbor]) {
                dfsUtil(neighbor, visited);
            }
        }
    }

    void dfs(int start) {
        vector<bool> visited(vertices, false);
        cout << "DFS Traversal : ";
        dfsUtil(start, visited);
        cout << endl;
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
    
    int startNode;

    cout << "Enter the starting node for DFS: ";
    cin >> startNode;
    g.dfs(startNode);

    return 0;
}
