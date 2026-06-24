#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long diff = r - l;

        long long sum = 0;
        long long add = 1;
        long long ans = 1;

        while (sum + add <= diff) {
            sum += add;
            add++;
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}