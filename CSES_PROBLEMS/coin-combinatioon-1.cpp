#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<long long> dp(x + 1, 0);
    dp[0] = 1;

    for (int sum = 1; sum <= x; sum++) {
        for (int c : coins) {
            if (sum >= c) {
                dp[sum] = (dp[sum] + dp[sum - c]) % MOD;
            }
        }
    }

    cout << dp[x] << '\n';
    return 0;
}