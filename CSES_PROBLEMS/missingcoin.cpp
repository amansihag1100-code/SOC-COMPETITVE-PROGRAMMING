#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<long long> coins(n);

    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());  // sort coins

    long long reachable = 0;           // max sum we can form

    for(int i = 0; i < n; i++) {

        if(coins[i] > reachable + 1) {
            break;                     // gap found → answer = reachable + 1
        }

        reachable += coins[i];         // extend reachable range
    }

    cout << reachable + 1;

    return 0;
}