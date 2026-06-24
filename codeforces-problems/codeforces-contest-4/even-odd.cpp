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

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        long long alice = 0;
        long long bob = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { // Alice
                if (a[i] % 2 == 0)
                    alice += a[i];
            } else { // Bob
                if (a[i] % 2 == 1)
                    bob += a[i];
            }
        }

        if (alice > bob)
            cout << "Alice\n";
        else if (bob > alice)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }

    return 0;
}