#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
    cin.tie(nullptr);

int T;
    cin >> T;

while (T--) {
        int n;
     cin >> n;

vector<long long> b(n);
 for (int i = 0; i < n; i++) cin >> b[i];

     if (n == 2) {
        long long x = max(b[0], b[1]);
            long long y = min(b[0], b[1]);
        cout << x << ' ' << y << '\n';
            continue;
        }

    sort(b.begin(), b.end(), greater<long long>());

        bool ok = true;
        for (int i = 0; i + 2 < n; i++) {
            if (b[i] % b[i + 1] != b[i + 2]) {
                ok = false;
                break;
            }
        }

     if (ok) {
            cout << b[0] << ' ' << b[1] << '\n';
} else {
            cout << -1 << '\n';
        }
    }

return 0;
}