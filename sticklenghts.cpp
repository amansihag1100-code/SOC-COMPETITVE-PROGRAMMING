#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());       // sort to find median

    long long median = a[n / 2];    // optimal meeting point

    long long cost = 0;

    for(int i = 0; i < n; i++) {

        cost += abs(a[i] - median); // total adjustment cost
    }

    cout << cost;

    return 0;
}