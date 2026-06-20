#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, k;                    // n applicants, m apartments, k tolerance
    cin >> n >> m >> k;

    vector<int> a(n), b(m);        // applicants + apartments

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());      // sort applicants
    sort(b.begin(), b.end());      // sort apartments

    int i = 0, j = 0;              // two pointers
    int ans = 0;                   // count matches

    while(i < n && j < m) {

        if(abs(a[i] - b[j]) <= k) {
            ans++;                 // match found
            i++;
            j++;
        }
        else if(a[i] < b[j]) {
            i++;                   // applicant too small
        }
        else {
            j++;                   // apartment too small
        }
    }

    cout << ans;

    return 0;
}