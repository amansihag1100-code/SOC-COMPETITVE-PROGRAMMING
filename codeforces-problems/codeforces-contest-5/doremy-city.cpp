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

        int mn = 1000000000;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        long long cnt = 0;

        for (int x : a) {
            if (x == mn) {
                cnt++;
            }
        }

        long long other = n - cnt;

        long long ans = cnt * other;
        ans += other * (other - 1) / 2;

        cout << ans << "\n";
    }

    return 0;
}