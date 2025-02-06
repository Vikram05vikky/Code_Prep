#include <iostream>
#include <vector>
#include<bits/stdc++.h>
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
    
     void bfs(int start) {
        vector<bool> visited(vertices, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal starting from node " << start << ": ";
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neighbor : adjlist[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
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
    int start;
    cin>>start;
    g.bfs(start);
    return 0;
}
