class Solution {
public:
    int findShortestCycle(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        int ans = n + 1;
        for (int i = 0; i < n; i++) {
            vector<int> dist(n, -1), parent(n, -1);
            queue<int> q;
            q.push(i);
            dist[i] = 0;
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int v : adj[u]) {
                    if (v == parent[u]) continue;
                    if (dist[v] == -1) {
                        dist[v] = dist[u] + 1;
                        parent[v] = u;
                        q.push(v);
                    } else {
                        ans = min(ans, dist[u] + dist[v] + 1);
                    }
                }
            }
        }
        return ans == n + 1 ? -1 : ans;

    }
};
