#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for (char c : s) {
        if (c == '4' || c == '7')
            count++;
    }

    if (count == 0) {
        cout << "NO";
        return 0;
    }

    while (count > 0) {
        int digit = count % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO";
            return 0;
        }
        count /= 10;
    }

    cout << "YES";

    return 0;
}