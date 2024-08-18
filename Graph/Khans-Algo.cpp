/*
Khans Algo BFS IMPLEMENTATION OF TOPO

Calculates the in-degree of each vertex.
Adds all vertices with in-degree 0 to a queue.
Processes vertices from the queue, adding them to the result and reducing the in-degree of their adjacent vertices.
If a vertex's in-degree becomes 0, it's added to the queue.
The process continues until the queue is empty.

*/


vector<int> topoSort(int V, vector<int> adj[]) 
{
    vector<int> indegree(V, 0);
    for(int i = 0; i < V; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i = 0; i < V; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    vector<int> topo;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0) q.push(it);
        }
    }
    return topo;
}


int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    vector<int> adj[V];

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> result = topoSort(V, adj);

    cout << "Topological Sort: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}