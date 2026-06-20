#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
    cin.tie(nullptr);

int T;
    cin >> T;

    while (T--) {
        long long n;
        cin >> n;

 if (n == 10) {
            cout << -1 << '\n';
            continue;
        }

        long long r = n % 12;
        long long a;

if (r <= 9) a = r;
        else if (r == 11) a = 11;
        else a = 22; // r == 10

        cout << a << ' ' << (n - a) << '\n';
    }
 return 0;
}