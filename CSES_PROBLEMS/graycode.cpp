#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 1 << n;

    for (int i = 0; i < total; i++) {
        int gray = i ^ (i >> 1);

        string s = "";

        for (int j = n - 1; j >= 0; j--) {
            if (gray & (1 << j))
                s += '1';
            else
                s += '0';
        }

        cout << s << "\n";
    }

    return 0;
}