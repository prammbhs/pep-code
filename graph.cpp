#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,m;
    cout<<"Enter no of edges: ";
    cin>>m;
    cout<<"Enter no of nodes: ";
    cin>>n;
    // adj matrix
    // int arr[n+1][n+1];
    // for(int i=0;i<m;i++) {
    //     int u,v;
    //     cin>>u>>v;
    //     arr[u][v]=1;
    //     arr[v][u]=1;
    // }
    //adj list.
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}