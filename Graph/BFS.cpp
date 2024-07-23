#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    queue<int> q;  // Queue for BFS traversal
    vector<int> visited(V, 0);  // Vector to track visited nodes
    q.push(0);  // Push the starting node (index 0) into the queue
    visited[0] = 1;  // Mark the starting node as visited
    vector<int> ans;  // Vector to store the BFS traversal result
    int node;  // Variable to store the current node being processed

    // BFS traversal
    while (!q.empty()) {
        node = q.front();  // Get the front node from the queue
        q.pop();  // Remove the front node from the queue
        ans.push_back(node);  // Add the current node to the result vector

        // Iterate over the adjacent nodes of the current node
        for (int j = 0; j < adj[node].size(); j++) {
            // If the adjacent node has not been visited yet
            if (!visited[adj[node][j]]) {
                visited[adj[node][j]] = 1;  // Mark it as visited
                q.push(adj[node][j]);  // Push it into the queue for further exploration
            }
        }
    }

    return ans;  // Return the BFS traversal result
  }

int main(){
    int V,E;
    cout<<"Enter the number of vertices and edges: ";
    cin>>V>>E;

    vector<int> adj[V];
    cout<<"Enter the edges: ";
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> res = bfsOfGraph(V,adj);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}