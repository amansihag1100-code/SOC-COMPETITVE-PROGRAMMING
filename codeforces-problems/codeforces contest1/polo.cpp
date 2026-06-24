#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, d;
    cin >> n >> m >> d;

    vector<int> a;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
    }

    int rem = a[0] % d;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] % d != rem) {
            cout << -1 << endl;
            return 0;
        }
    }

    sort(a.begin(), a.end());

    int median = a[a.size() / 2];

    long long ans = 0;

    for (int i = 0; i < a.size(); i++) {
        ans += abs(a[i] - median) / d;
    }

    cout << ans << endl;

    return 0;
}