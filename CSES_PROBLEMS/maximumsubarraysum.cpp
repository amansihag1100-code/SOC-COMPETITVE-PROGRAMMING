#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;                          // array size
    cin >> n;

    vector<long long> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];              // input elements
    }

    long long current = arr[0];     // current subarray sum
    long long best = arr[0];        // best answer so far

    for(int i = 1; i < n; i++) {

        // either extend previous subarray OR start new one
        current = max(arr[i], current + arr[i]);

        // update best answer
        best = max(best, current);
    }

    cout << best;

    return 0;
}