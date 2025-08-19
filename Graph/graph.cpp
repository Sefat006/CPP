#include <bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;

    // u and v are 2 vertices
    void addEdge(int u,int v,bool direction){
        //direction = 0 -> undirected
        //direction = 1 -> directed

        //create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
            /*
            adj[v].push_back(u);
            এটা তখনই হবে যখন graph undirected।
            Undirected মানে হলো edge দু'দিকেই যাবে (u ↔ v)।
            তাই v এর adjacency list-এ u ঢুকিয়ে দেওয়া হচ্ছে।
            */
        }
    }

    void printAdjList(){
        for(auto i:adj){
            cout<<i.first << "->";
            for(auto j:i.second){
                cout<<j<<", ";
            }cout<<endl;
        }
    }
};


int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int m;
    cout << "Enter the number of edges: ";
    cin >> m;

    graph g; //object declare of class graph;

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0); // Adding edges with a default weight of 0
    }

    cout << "Adjacency List of the graph:" << endl;
    g.printAdjList();

    return 0;
}

/*
    the graph
      2
     / \
    1   3
    |   |
    0---4

    using list:
    0->1, 4
    1->0, 2
    2->1, 3
    3->2, 4
    4->3, 0
*/