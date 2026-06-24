#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    long long ans = 1e18;

    for (int mask = 0; mask < (1 << n); mask++) {
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i))
                sum += a[i];
        }

        ans = min(ans, llabs(total - 2 * sum));
    }

    cout << ans << "\n";

    return 0;
}