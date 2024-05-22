#include<bits/stdc++.h>  // Including all standard C++ libraries
#include<vector>  // Including vector library
using namespace std;

void DFS(int node,vector<int>adj[],vector<bool>&visited,vector<int>&ans){
    ans.push_back(node);  // Push the current node into the answer vector
    visited[node] = 1;  // Mark the current node as visited
    for(auto it:adj[node]){  // Loop through all adjacent nodes of the current node
        if(!visited[it]){  // If the adjacent node has not been visited
            DFS(it,adj,visited,ans);  // Recursively call DFS for the adjacent node
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int>adj[]){
    vector<bool> visited(V,0);  // Vector to track visited nodes
    vector<int> ans;  // Vector to store the DFS traversal result
    DFS(0,adj,visited,ans);  // Start DFS traversal from node 0
    return ans;  // Return the DFS traversal result
}

int main(){
    int V,E;
    cout<<"Enter the number of vertices and edges: ";
    cin>>V>>E;

    vector<int> adj[V];  // Array of vectors to represent adjacency list
    cout<<"Enter the edges: ";
    for(int i=0;i<E;i++){  // Input edges and populate the adjacency list
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> res = dfsOfGraph(V,adj);  // Perform DFS traversal
    for(auto it:res){  // Print the DFS traversal result
        cout<<it<<" ";
    }
    return 0;
}





/*
USING STACK
vector<int> dfsOfGraph(int V, vector<int>adj[]) {
    vector<bool> visited(V, false); // Vector to track visited nodes
    vector<int> ans; // Vector to store the DFS traversal result
    stack<int> st; // Stack to simulate function call stack for DFS

    // Start DFS from node 0
    st.push(0);

    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!visited[node]) {
            ans.push_back(node); // Add the current node to the result

            visited[node] = true; // Mark the current node as visited

            // Visit all adjacent nodes of the current node
            for (int i = adj[node].size() - 1; i >= 0; i--) {
                int neighbor = adj[node][i];
                if (!visited[neighbor]) {
                    st.push(neighbor); // Push the neighbor onto the stack
                }
            }
        }
    }

    return ans;
}
*/