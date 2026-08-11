#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>>& adjMatrix) {

    int n = adjMatrix.size();

    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {

        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < n; i++) {

            if (adjMatrix[node][i] == 1 && !visited[i]) {

                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {

    vector<vector<int>> adjMatrix = {

        {0,1,1,0},
        {1,0,0,1},
        {1,0,0,1},
        {0,1,1,0}
    };

    bfs(0, adjMatrix);

    return 0;
}