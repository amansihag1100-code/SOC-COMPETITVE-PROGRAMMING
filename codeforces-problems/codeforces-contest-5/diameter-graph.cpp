#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;

        long long mx = n * (n - 1) / 2;

        bool ok = true;

        if (m < n - 1 || m > mx) {
            ok = false;
        }

        if (n == 1) {
            if (k <= 1) {
                ok = false;
            }
        } else {
            if (k <= 2) {
                ok = false;
            } else if (k == 3) {
                if (m != mx) {
                    ok = false;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}