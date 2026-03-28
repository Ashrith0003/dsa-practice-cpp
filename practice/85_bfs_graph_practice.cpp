bsf graphs//
#include<iostream>
#include<queue>
using namespace std;
#define max 10
class Graph{
    int adj[max][max];
    int v;
public:
    Graph(int vertcis){
        v= vertcis;
        for(int i =0;i<max ;i++){
            for(int j=0;j<max;j++){
                adj[i][j]=0;
            }
        }
  }
// void addedge(int u,int v){  // undirected//
//     adj[u][v]=1;
//     adj[v][u]=1;

// }

// void addedge(int u,int v){  // directed graph//
//     adj[u][v] = 1;

// }

// void addedge(int v,int u,int weight){  // directed weighted graphs// 
//     adj[u][v]=weight;
// }

// void addedge(int v,int u,int weight){  // undirected weighted graphs//
//     adj[u][v]=adj[v][u]=weight;
// }

void display(){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
};
 
int main(){
    Graph g(5);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(3,4);
    g.display();
    return 0;
}
