class Solution {
public:

    void bfs(int row, int col, vector<vector<int>>& grid,
             vector<vector<int>>& visited) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;

        q.push({row, col});
        visited[row][col] = 1;

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        while (!q.empty()) {

            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {

                int nr = r + delRow[i];
                int nc = c + delCol[i];

                if (nr >= 0 && nr < n &&
                    nc >= 0 && nc < m &&
                    grid[nr][nc] == 1 &&
                    !visited[nr][nc]) {

                    visited[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));

        // First and last column
        for (int i = 0; i < n; i++) {

            if (grid[i][0] == 1 && !visited[i][0]) {
                bfs(i, 0, grid, visited);
            }

            if (grid[i][m - 1] == 1 && !visited[i][m - 1]) {
                bfs(i, m - 1, grid, visited);
            }
        }

        // First and last row
        for (int j = 0; j < m; j++) {

            if (grid[0][j] == 1 && !visited[0][j]) {
                bfs(0, j, grid, visited);
            }

            if (grid[n - 1][j] == 1 && !visited[n - 1][j]) {
                bfs(n - 1, j, grid, visited);
            }
        }

        // Count remaining land
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == 1 && !visited[i][j]) {
                    count++;
                }
            }
        }

        return count;
    }
};