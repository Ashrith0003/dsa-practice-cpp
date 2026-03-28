#include<iostream>
#include<queue>
using namespace std;
#define max 10
int visited[max] ={0};
class Graph{
    int adj[max][max];
    int v;
public:
    Graph(int vertics){
        v = vertics;
        for(int i=0;i<max;i++){
            for(int j=0;j<max;j++){
                adj[i][j]=0;
            }
        }
    };
    
    void addedge(int u,int w){ //directed graph;
        adj[u][w]=1;
    };

    void bsf(int s){
        queue<int> q;
        q.push(s);
        visited[s]= true;
        while(!q.empty()){
           int m = q.front();
           q.pop();
           cout<<m<<" ";

           for(int i=0;i<v;i++){
            if(adj[m][i]==1 && !visited[i]){
                q.push(i);
                visited[i]= true;
            }
           }
        };
    };
};

int main(){
    Graph g(5);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(3,0);
    g.bsf(0);
    return 0;
}





