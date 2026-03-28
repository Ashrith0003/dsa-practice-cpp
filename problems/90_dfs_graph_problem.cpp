#include<iostream>
#include<stack>
using namespace std;
#define max 10
class Graph{
    int adj[max][max];
    int v;
public:
    Graph(int size){
        v = size;
        for(int i=0;i<max;i++){
            for(int j=0;j<max;j++){
                adj[i][j]=0;
            }
        }
    };

    void addEdge(int w ,int x){  // directed Graph//
        adj[w][x] = 1;
    }

    void DSF(int s){
        int stack[max];
        int visited[max] = {0};
        int top = -1;
        stack[++top] = s;
        visited[s] = true;

        while(top != -1){
            int node = stack[top--];
            cout<<node<<" ";

            for(int i=0;i<v;i++){
                if(adj[node][i] == 1 && visited[i]==0){
                    stack[++top]=i;
                    visited[i]= true;
                }
            }
        }
    }
};

int main(){
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.DSF(0);
    return 0;

}