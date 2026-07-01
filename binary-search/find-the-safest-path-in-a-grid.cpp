class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {

        int n = grid.size();

        queue<pair<int, int>> q;
        vector<vector<int>> dis(n, vector<int>(n, INT_MAX));
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {
                if (grid[i][j]) {
                    dis[i][j] = 0;
                    q.push({i, j});
                }
            }
        }


        // multi source bfs to compute the safest factor
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while (!q.empty()) {

            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {

                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx < 0 || ny < 0 || nx >= n || ny >= n)
                    continue;

                if (dis[nx][ny] != INT_MAX)
                    continue;

                dis[nx][ny] = dis[x][y] + 1;
                q.push({nx, ny});
            }
        }

        priority_queue<vector<int>> pq;
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        pq.push({dis[0][0], 0, 0});

        while (!pq.empty()) {
            
            int safe = cur[0];
            int x = cur[1];
            int y = cur[2];
            q.pop();

            if (vis[x][y])
                continue;

            vis[x][y] = true;

            if (x == n - 1 && y == n - 1)
                return safe;

            if (x - 1 >= 0 && !vis[x - 1][y]) {

                int newSafe = min(safe, dis[x - 1][y]);

                pq.push({newSafe, x - 1, y});
            }
            if (x + 1 < n && !vis[x + 1][y]) {

                int newSafe = min(safe, dis[x + 1][y]);

                pq.push({newSafe, x + 1, y});
            }

            if (y - 1 >= 0 && !vis[x][y - 1]) {

                int newSafe = min(safe, dis[x][y - 1]);

                pq.push({newSafe, x, y - 1});
            }

            if (y + 1 < n && !vis[x][y + 1]) {

                int newSafe = min(safe, dis[x][y + 1]);

                pq.push({newSafe, x, y + 1});
            }
        }
        return -1;
    }
};