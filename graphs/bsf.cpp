#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(int start,vector<vector<int>>&adj){
    int n = adj.size();
    vector<bool> visited(n,false);
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout<<node<<" ";
        for(auto neighbour: adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }  
};


int main(){
    int n =5;
    vector<vector<int>> adj(n);

    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    bfs(0, adj);

    return 0;

}
