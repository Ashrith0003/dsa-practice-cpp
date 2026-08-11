#include<iostream>
#include<vector>
#include<queue>
using namespace std;

dfs(int start,vector<vector<int>>&adj,vector<bool>&visited){
    visited[start] = true;
    cout<<start<<" ";

    for(auto neighbour:adj[start]){
        if(!visited[neighbour]){
            visited[neighbour] = true;
            dfs(neighbour,adj,visited);
        }
    }
};

int main() {

    int n = 5;

    vector<vector<int>> adj(n);

    // Undirected graph
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    vector<bool> visited(n, false);

    dfs(0, adj, visited);

    return 0;
}