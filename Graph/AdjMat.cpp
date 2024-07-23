#include<iostream>
#include <vector>

using namespace std;


// Adjacency Matrix
//Undirected Unwerighted Graph

int main(){

    int vertex, edge;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edge;

    vector<vector<bool>> AdjMat(vertex,vector<bool>(vertex,0));

    int u,v;
    cout<<"Enter the edges: ";
    for(int i=0;i<edge;i++){
        cin>>u>>v;
        AdjMat[u][v]=1;
        AdjMat[v][u]=1;
    }
    
    cout<<"Adjacency Matrix: "<<endl;
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

}

/*
// Adjacency Matrix
//Undirected Weighted Graph

int main(){

    int vertex, edge;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edge;

    vector<vector<int>> AdjMat(vertex,vector<int>(vertex,0)); //take int value if weighted

    int u,v,weight;
    cout<<"Enter the edges: ";
    for(int i=0;i<edge;i++){
        cin>>u>>v>>weight;
        AdjMat[u][v]=weight;
        AdjMat[v][u]=weight;
    }
    
    cout<<"Adjacency Matrix: "<<endl;
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

}

*/

/*

Adjacency Matrix
directed Graph

int main(){

    int vertex, edge;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edge;

    vector<vector<bool>> AdjMat(vertex,vector<bool>(vertex,0));

    int u,v;
    cout<<"Enter the edges: ";
    for(int i=0;i<edge;i++){
        cin>>u>>v;
        AdjMat[u][v]=1;
        
    }
    
    cout<<"Adjacency Matrix: "<<endl;
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

}
*/



//Adjacency Matrix
//directed Weighted Graph

int main(){

    int vertex, edge;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edge;

    vector<vector<int>> AdjMat(vertex,vector<int>(vertex,0));

    int u,v,weight;
    cout<<"Enter the edges: ";
    for(int i=0;i<edge;i++){
        cin>>u>>v>>weight;
        AdjMat[u][v]=weight;
        
    }
    
    cout<<"Adjacency Matrix: "<<endl;
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

}