#include <bits/stdc++.h>
using namespace std;

/*
using vector: u & v are 2 vertices
adj[u] = {v1,v2}
adj[0] = {1, 4}; means 0 vertices is connected with v1 and v4
adj[1] = {0, 2};
adj[2] = {1, 3};
adj[3] = {2, 4};
adj[4] = {3, 0};

*/

// directed graph, n=vertices, m=edges
// edges = { {0,1}, {1,2}, {2,3}, {3,4} }
vector< vector<int>> printAdjacency(int n, int m, vector< vector<int>> &edges){
    vector<int> ans[n];
    // ans array will store all adjacent nodes
    for (int i=0; i<m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);//as directed graph
    }

    vector<vector<int>> adj(n);
    for(int i=0; i<n; i++){
        adj[i].push_back(i);

        for (int j=0; j<ans[i].size(); j++) {
            adj[i].push_back(ans[i][j]);
        }
    }

    return adj;
}


int main() {
    int n = 5, m = 6;

    // edge list
    vector<vector<int>> edges = {
        {0,1}, {0,4}, {1,2}, {1,3}, {1,4}, {2,3}
    };

    vector<vector<int>> adj = printAdjacency(n, m, edges);

    // adjacency list print
    cout << "Adjacency List of the graph:" << endl;
    for (int i=0; i<n; i++) {
        cout << adj[i][0] << " -> ";
        for (int j=1; j<adj[i].size(); j++) {
            cout << adj[i][j];
            if (j < adj[i].size()-1) cout << ", ";
        }
        cout << endl;
    }

    return 0;
}