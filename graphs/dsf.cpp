#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {

    visited[node] = true;
    cout << node << " ";

    for(int neighbour : adj[node]) {
        if(!visited[neighbour]) {
            dfs(neighbour, adj, visited);
        }
    }
}

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