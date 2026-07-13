#include <bits/stdc++.h>
using namespace std;

struct tv
{
    int l,r,id;
};

bool cmp(tv a,tv b)
{
    if(a.l==b.l)
        return a.r>b.r;
    return a.l<b.l;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    vector<tv> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i].l>>a[i].r;
        a[i].id=i+1;
    }

    sort(a.begin(),a.end(),cmp);

    int mx=-1;

    for(int i=0;i<n;i++)
    {
        if(a[i].r<=mx)
        {
            cout<<a[i].id;
            return 0;
        }

        mx=max(mx,a[i].r);
    }

    cout<<-1;

    return 0;
}