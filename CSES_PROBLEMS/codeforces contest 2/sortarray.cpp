#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> sorted(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sorted[i] = a[i];
    }

    sort(sorted.begin(), sorted.end());

    int left = 0;

    while(left < n && a[left] == sorted[left])
    {
        left++;
    }

    if(left == n)
    {
        cout << "yes\n";
        cout << "1 1";
        return 0;
    }

    int right = n - 1;

    while(right >= 0 && a[right] == sorted[right])
    {
        right--;
    }

    reverse(a.begin() + left, a.begin() + right + 1);

    if(a == sorted)
    {
        cout << "yes\n";
        cout << left + 1 << " " << right + 1;
    }
    else
    {
        cout << "no";
    }

    return 0;
}