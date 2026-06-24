#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if(k == 0)
    {
        if(a[0] == 1)
        {
            cout << -1;
        }
        else
        {
            cout << a[0] - 1;
        }

        return 0;
    }

    int answer = a[k - 1];

    if(k < n && a[k] == answer)
    {
        cout << -1;
    }
    else
    {
        cout << answer;
    }

    return 0;
}