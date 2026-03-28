#include<iostream>
#include<queue>
using namespace std;
#define max 10

class Graph {
    int adj[max][max];
    int visited[max];
    int v;

public:
    Graph(int vertices) {
        v = vertices;
        for (int i = 0; i < max; i++) {
            visited[i] = 0;
            for (int j = 0; j < max; j++) {
                adj[i][j] = 0;
            }
        }
    }

    void addEdge(int u, int w) {
        adj[u][w] = 1;
    }

    void bfs(int s) {
        for (int i = 0; i < max; i++) visited[i] = 0;

        queue<int> q;
        q.push(s);
        visited[s] = 1;

        while (!q.empty()) {
            int m = q.front();
            q.pop();
            cout << m << " ";

            for (int i = 0; i < v; i++) {
                if (adj[m][i] == 1 && !visited[i]) {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);

    g.bfs(0);
    return 0;
}
