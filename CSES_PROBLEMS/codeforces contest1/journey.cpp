#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long cycle = a + b + c;

        long long full = n / cycle;

        long long days = full * 3;
        long long covered = full * cycle;

        if (covered >= n) {
            cout << days << endl;
            continue;
        }

        covered += a;
        days++;

        if (covered >= n) {
            cout << days << endl;
            continue;
        }

        covered += b;
        days++;

        if (covered >= n) {
            cout << days << endl;
            continue;
        }

        covered += c;
        days++;

        cout << days << endl;
    }

    return 0;
}