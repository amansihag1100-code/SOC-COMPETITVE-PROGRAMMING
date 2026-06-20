#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;                      // n children, x max weight
    cin >> n >> x;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());      // sort weights

    int i = 0, j = n - 1;          // light + heavy
    int ans = 0;

    while(i <= j) {

        if(a[i] + a[j] <= x) {
            i++;                   // pair light with heavy
        }

        j--;                       // heavy always used
        ans++;                     // one gondola used
    }

    cout << ans;

    return 0;
}