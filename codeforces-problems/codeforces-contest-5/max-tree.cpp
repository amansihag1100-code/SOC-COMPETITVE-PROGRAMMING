#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> g(n + 1);
        vector<int> indeg(n + 1, 0);

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            long long x, y;

            cin >> u >> v >> x >> y;

            if (x >= y) {
                g[u].push_back(v);
                indeg[v]++;
            } else {
                g[v].push_back(u);
                indeg[u]++;
            }
        }

        queue<int> q;

        for (int i = 1; i <= n; i++) {
            if (indeg[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topo;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            topo.push_back(u);

            for (int v : g[u]) {
                indeg[v]--;

                if (indeg[v] == 0) {
                    q.push(v);
                }
            }
        }

        vector<int> p(n + 1);

        int val = n;

        for (int node : topo) {
            p[node] = val;
            val--;
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}