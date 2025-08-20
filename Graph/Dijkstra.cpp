#include <bits/stdc++.h>
using namespace std;


vector<int> dijkstra(vector<vector<int>>&vec, int vertices, int edges, int source){
    unordered_map<int, list<pair<int,int>> > adj;

    for (int i=0; i<edges; i++) {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    //creation of distance vector with infinite value
    vector<int> dist(vertices);
    for(int i=0; i<vertices;i++){
        dist[i] = INT_MAX;
    }

    //creation of set on basis (distance, node)
    set< pair<int,int> > st;

    dist[source] = 0;
    st.insert(make_pair(0, source));

    while( !st.empty()){
        //fetch top record
        auto top = *(st.begin());

        int nodeDistance = top.first;
        int topNode = top.second;

        //remove top record
        st.erase(st.begin());

        //traverse on neighbour
        for(auto neighbour: adj[topNode]){
            if( nodeDistance+neighbour.second < dist[neighbour.first]){
                auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
                //if record found, then erase it
                if( record != st.end()){
                    st.erase(record);
                }

                // distance update
                dist[neighbour.first] = nodeDistance + neighbour.second;
                //record push in set
                st.insert(make_pair(dist[neighbour.first], neighbour.first));
            }
        }
    }
    return dist;
}

int main(){
    int vertices, edges;
    cin >> vertices >> edges;

    vector<vector<int>> vec(edges, vector<int>(3)); // m edges, each with u, v, w

    // taking input edges
    for(int i=0; i<edges; i++){
        int u, v, w;
        cin >> u >> v >> w;
        vec[i][0] = u;
        vec[i][1] = v;
        vec[i][2] = w;
    }

    int source;
    cout<<"input source : ";
    cin >> source;

    vector<int> dist = dijkstra(vec, vertices, edges, source);

    cout << "Shortest distances from source " << source << ":\n";
    for(int i=0; i<vertices; i++){
        if(dist[i] == INT_MAX)
            cout <<"Node " << i << " -> " << "INF\n";
        else
            cout << "Node " << i << " -> " << dist[i] << "\n";
    }

    return 0;
}