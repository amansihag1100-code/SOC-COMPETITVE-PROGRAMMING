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

        if (n == 2) {
            cout << "1 2 1 1 2 2 1 2\n";
            continue;
        }

        vector<int> ans;

    for (int i = 1; i <= n; i++) ans.push_back(i);

        for (int i = 1; i <= n; i++) ans.push_back(i);

for (int i = 1; i <= n; i++)
            ans.push_back(i % n + 1);

for (int i = 1; i <= n; i++)
            ans.push_back((i + 2) % n + 1);

for (int i = 0; i < (int)ans.size(); i++) {
            if (i) cout << ' ';
            cout << ans[i];}
    cout << '\n';
    }

    return 0;
}