#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        long long k;
        cin >> k;

        long long len = 1;
        long long cnt = 9;
        long long start = 1;

        while (k > len * cnt) {
            k -= len * cnt;
            len++;
            cnt *= 10;
            start *= 10;
        }

        long long num = start + (k - 1) / len;

        string s = to_string(num);

        cout << s[(k - 1) % len] << "\n";
    }

    return 0;
}