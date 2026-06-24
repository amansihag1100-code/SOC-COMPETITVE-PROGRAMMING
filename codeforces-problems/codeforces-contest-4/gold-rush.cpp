#include <bits/stdc++.h>
using namespace std;

bool canMake(long long n, long long m) {
    if (n == m) return true;
    if (n < m) return false;
    if (n % 3 != 0) return false;

    return canMake(n / 3, m) || canMake(2 * n / 3, m);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        cout << (canMake(n, m) ? "YES" : "NO") << '\n';
    }

    return 0;
}