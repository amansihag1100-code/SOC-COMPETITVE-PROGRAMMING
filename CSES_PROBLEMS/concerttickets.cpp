#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    multiset<int> tickets;         // stores ticket prices

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        tickets.insert(x);
    }

    for(int i = 0; i < m; i++) {

        int maxPrice;
        cin >> maxPrice;

        auto it = tickets.upper_bound(maxPrice); // first > maxPrice

        if(it == tickets.begin()) {
            cout << -1 << "\n";   // no ticket affordable
        }
        else {
            it--;                  // best affordable ticket
            cout << *it << "\n";
            tickets.erase(it);     // remove used ticket
        }
    }

    return 0;
}