#include <iostream>
#include <vector>
#include <stack>
/*

TOPO SORT(DFS) -- LINEAR ODERING OF VERTICES SUCH 
THAT IF THERE IS AN EDGE BEHIND U AND V, U APPEARS BEFORE V IB THAT ODERING.

ONLY FOR DIRECTED ACYLIC GRAPH
SUPPOSE IT IS LIKE 
5 -> 0
4 -> 0
5 -> 2 
2 -> 3
3 -> 1
4 -> 1
SO CORRECT SORTING ->>>>>>>> 5 4 2 3 1 0 AND ALSO 4 5 2 3 1 0

*/

	void dfs(int node,int vis[],stack<int>&st,vector<int>adj[]){
         vis[node]=1;
         for(auto it: adj[node]){
             if(!vis[it]) dfs(it,vis,st,adj);
         }
         st.push(node);
     }
     
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int vis[V]={0};
	    stack<int> st;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,vis,st,adj);
	        }
	    }
	    vector<int>ans;
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}



// Assuming the topoSort and dfs functions are defined above

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