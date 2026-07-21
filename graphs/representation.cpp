#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(int start,vector<vector<int>>& adj){
    int n = adj.size();

    vector<bool>visited(n,false);

    queue<int> q;

    visited[start] = true;

    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout<<node<<" ";

        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push();
            }
        }
    }
}