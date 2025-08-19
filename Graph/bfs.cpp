#include <bits/stdc++.h>
using namespace std;

map<int, list<int>> adj;  // adjacency list

// edge add করা
void addEdge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u); // undirected graph
}

// BFS traversal
void bfs(int source) {
    map<int, bool> visited; 
    queue<int> q;

    q.push(source);
    visited[source] = true;

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " "; // visit node

        for(auto nbr : adj[node]) {
            if(!visited[nbr]) {
                q.push(nbr);
                visited[nbr] = true;
            }
        }
    }
}


int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    cout << "Enter " << m << " edges (u v) format:" << endl;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        addEdge(u, v);
    }

    int start;
    cout << "Enter starting node for BFS: ";
    cin >> start;

    bfs(start);

    return 0;
}