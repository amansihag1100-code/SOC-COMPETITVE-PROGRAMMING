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

        vector<int> p(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }

        string s;
        cin >> s;

        vector<int> vis(n + 1, 0);
        vector<int> ans(n + 1);

        for (int i = 1; i <= n; i++) {
            if (vis[i]) continue;

            vector<int> cycle;

            int cur = i;

            while (!vis[cur]) {
                vis[cur] = 1;
                cycle.push_back(cur);
                cur = p[cur];
            }

            int black = 0;

            for (int node : cycle) {
                if (s[node - 1] == '0') {
                    black++;
                }
            }

            for (int node : cycle) {
                ans[node] = black;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}