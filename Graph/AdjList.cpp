#include <iostream>
#include <vector>
using namespace std;

// Adjacency List
// Undirected Unweighted Graph
/*
int main() {
    int vertex, edge;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertex >> edge;

    vector<vector<int>> AdjList(vertex);  // Adjacency List of size vertex with each element as a vector of integers

    int u, v;
    cout << "Enter the edges: ";
    for (int i = 0; i < edge; i++) {
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    cout << "Adjacency List: " << endl;
    for (int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for (int j = 0; j < AdjList[i].size(); j++) {
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/



// Adjacency List
//Undirected weighted Graph

/*
int main(){

    int vertex, edge;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edge;

    vector<vector<pair<int,int>>> AdjList(vertex);

    int u,v,weight;
    cout<<"Enter the edges: ";
    for(int i=0;i<edge;i++){
        cin>>u>>v>>weight;
        AdjList[u].push_back(make_pair(v,weight));
        AdjList[v].push_back(make_pair(u,weight));
    }
    
    cout<<"Adjacency List: "<<endl;
    for(int i=0;i<vertex;i++){
        cout<<i<<" -> ";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<AdjList[i][j].first<<" "<<AdjList[i][j].second<<" ";
        }
        cout<<endl;
    }

}

*/



// Adjacency List
//Directed Unweighted Graph
/*
int main(){
    
        int vertex, edge;
        cout<<"Enter the number of vertices and edges: ";
        cin>>vertex>>edge;
    
        vector<vector<int>> AdjList(vertex);
    
        int u,v;
        cout<<"Enter the edges: ";
        for(int i=0;i<edge;i++){
            cin>>u>>v;
            AdjList[u].push_back(v);
        }
        
        cout<<"Adjacency List: "<<endl;
        for(int i=0;i<vertex;i++){
            cout<<i<<" -> ";
            for(int j=0;j<AdjList[i].size();j++){
                cout<<AdjList[i][j]<<" ";
            }
            cout<<endl;
        }
    
    }


*/
/*
 Adjacency List
Directed weighted Graph

int main(){
    
        int vertex, edge;
        cout<<"Enter the number of vertices and edges: ";
        cin>>vertex>>edge;
    
        vector<vector<pair<int,int>>> AdjList(vertex);
    
        int u,v,weight;
        cout<<"Enter the edges: ";
        for(int i=0;i<edge;i++){
            cin>>u>>v>>weight;
            AdjList[u].push_back(make_pair(v,weight));
        }
        
        cout<<"Adjacency List: "<<endl;
        for(int i=0;i<vertex;i++){
            cout<<i<<" -> ";
            for(int j=0;j<AdjList[i].size();j++){
                cout<<AdjList[i][j].first<<" "<<AdjList[i][j].second<<" ";
            }
            cout<<endl;
        }
    
    }


    */


