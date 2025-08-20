#include <bits/stdc++.h>
using namespace std;


vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m,int source, vector<pair<pair<int, int>, int>> &g)
{
    unordered_map<int, list<pair<int,int>>> adj;

    for (int i=0; i<g.size(); i++) {
        //g[i] = { {u, v}, w }
        int u = g[i].first.first; // u
        int v = g[i].first.second; // v
        int w = g[i].second; // w

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> key(n+1); // weight
    vector<bool> mst(n+1);
    vector<int> parent(n+1); // parent of neighbour vertices

    for (int i=0; i<=n; i++) {
        key[i] = INT_MAX; // {inf, inf, inf, ... n}
        mst[i] = false; // {false, false, false,...n};
        parent[i] = -1; // {-1,-1,-1,...,n}
    }

    //prims algo
    key[source] = 0;//{inf,0, inf, inf,...n};
    parent[source] = -1;

    for (int i=1; i<n; i++) {
        int mini = INT_MAX;
        int u; // u = source er por jei vertices niye kaj korbe
        for(int v=1; v<=n; v++){ // v=connected vertices;
            if(mst[v] == false && key[v]<mini){
                u = v;
                mini = key[v];
            }
        }

        // mark min node as true;
        mst[u] = true;

        //check its adjacent nodes
        for(auto it:adj[u]){
            int v=it.first;
            int w=it.second;
            if(mst[v] == false && w<key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    }

    vector< pair< pair<int, int>, int>> result;
    for (int i=2; i<=n; i++) { // bcz i=1=-1;
        result.push_back({{parent[i], i}, key[i]});
    }

    return result;
}


int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<pair<pair<int,int>, int>> edges;

    cout << "Enter edges in format (u v w):\n";
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({{u,v}, w});
    }

    int source;
    cout << "Enter source node: ";
    cin >> source;

    vector<pair<pair<int,int>, int>> mst = calculatePrimsMST(n, m, source, edges);

    cout << "\nEdges in the Minimum Spanning Tree:\n";
    for(auto edge : mst){
        cout << edge.first.first << " - " << edge.first.second << " : weight = " << edge.second << "\n";
    }

    return 0;
}
