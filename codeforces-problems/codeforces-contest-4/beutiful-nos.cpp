#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;

        int sum = 0;
        for (char c : x) sum += c - '0';

        if (sum <= 9) {
            cout << 0 << '\n';
            continue;
        }

        int need = sum - 9;
        vector<int> cap;

        for (int i = 0; i < (int)x.size(); i++) {
            int d = x[i] - '0';

            if (i == 0)
                cap.push_back(d - 1); // first digit can't become 0
            else
                cap.push_back(d);
        }

        sort(cap.rbegin(), cap.rend());

        int reduced = 0, moves = 0;

        for (int c : cap) {
            reduced += c;
            moves++;

            if (reduced >= need) break;
        }

        cout << moves << '\n';
    }

    return 0;
}