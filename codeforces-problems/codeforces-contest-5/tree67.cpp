#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int n = x + y;

        if (n % 2 == 1) {
            if (y < x + 1) {
                cout << "NO\n";
                continue;
            }

            cout << "YES\n";

            int cur = 2;

            for (int i = 0; i < x; i++) {
                int a = cur++;
                int b = cur++;

                cout << 1 << " " << a << "\n";
                cout << a << " " << b << "\n";
            }

            int rem = y - x - 1;

            for (int i = 0; i < rem; i++) {
                cout << 1 << " " << cur++ << "\n";
            }
        }
        else {
            if (x == 0 || y < x) {
                cout << "NO\n";
                continue;
            }

            cout << "YES\n";

            int cur = 2;

            for (int i = 0; i < x - 1; i++) {
                int a = cur++;
                int b = cur++;

                cout << 1 << " " << a << "\n";
                cout << a << " " << b << "\n";
            }

            int rem = y - x + 1;

            for (int i = 0; i < rem; i++) {
                cout << 1 << " " << cur++ << "\n";
            }
        }
    }

    return 0;
}