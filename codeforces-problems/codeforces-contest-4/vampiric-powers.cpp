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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> cur(256, 0), nxt(256, 0);
        int ans = 0;

        for (int v : a) {
            fill(nxt.begin(), nxt.end(), 0);

            nxt[v] = 1;
            ans = max(ans, v);

            for (int x = 0; x < 256; x++) {
                if (cur[x]) {
                    nxt[x ^ v] = 1;
                }
            }

            for (int x = 0; x < 256; x++) {
                if (nxt[x]) {
                    ans = max(ans, x);
                }
            }

            cur.swap(nxt);
        }

        cout << ans << '\n';
    }

    return 0;
}