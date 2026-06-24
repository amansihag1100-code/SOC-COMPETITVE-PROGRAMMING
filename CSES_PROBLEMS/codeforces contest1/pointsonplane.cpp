#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long k = sqrt(n);

        while (k * k < n) {
            k++;
        }

        cout << k - 1 << endl;
    }

    return 0;
}