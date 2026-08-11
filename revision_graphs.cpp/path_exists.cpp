#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool path_exists(int source,int destination,vector<vector<int>>&adj,vector<bool>&visited){
    queue<int> q;
    visited[source] = true;
    q.push(source);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        if(node == destination)
            return true;

        
        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }

    return false;
}

int main()
{
    int n = 7;  

    vector<vector<int>> adj(n);
    vector<bool> visited(n,false);

    // Undirected Graph
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[1].push_back(4);
    adj[4].push_back(1);

    adj[2].push_back(5);
    adj[5].push_back(2);

    adj[3].push_back(6);
    adj[6].push_back(3);

    adj[5].push_back(6);
    adj[6].push_back(5);

   bool ans = path_exists(0,6,adj,visited);

    if(ans)
        cout << "Path Exists";
    else
        cout << "Path Doesn't Exist";

    return 0;
};