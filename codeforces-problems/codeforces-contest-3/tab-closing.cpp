#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc;
    cin >> tc;
 
    while (tc--) {
        long long a, b, n;
        cin >> a >> b >> n;
 
        long long T = (a + b - 1) / b; // ceil(a / b)
 
        if (n < T) {
            cout << 1 << '\n';
            continue;
        }
 
        long long g = gcd(a, b);
        long long A = a / g;
 
        if (A == 1) { // a == b
            cout << 1 << '\n';
        }
        else if (n == T && T % A == 0) {
            cout << 1 << '\n';
        }
        else {
            cout << 2 << '\n';
        }
    }
 
    return 0;
}