#include <iostream>
#include <set>
using namespace std;

int main() {
    set<long long> cubes;

    for (long long i = 1; i * i * i <= 1000000000000LL; i++) {
        cubes.insert(i * i * i);
    }

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        bool ok = false;

        for (long long i = 1; i * i * i <= x; i++) {
            long long val = i * i * i;

            if (cubes.count(x - val)) {
                ok = true;
                break;
            }
        }

        if (ok) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}