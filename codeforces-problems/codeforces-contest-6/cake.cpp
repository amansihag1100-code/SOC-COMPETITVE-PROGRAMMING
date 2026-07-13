#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    vector<ll> val(n);
    vector<ll> comp;

    for(int i=0;i<n;i++)
    {
        ll r,h;
        cin>>r>>h;

        val[i]=r*r*h;
        comp.push_back(val[i]);
    }

    sort(comp.begin(),comp.end());
    comp.erase(unique(comp.begin(),comp.end()),comp.end());

    vector<ll> bit(comp.size()+2,0);

    auto update=[&](int idx,ll v)
    {
        while(idx<(int)bit.size())
        {
            bit[idx]=max(bit[idx],v);
            idx+=idx&-idx;
        }
    };

    auto query=[&](int idx)
    {
        ll ans=0;
        while(idx>0)
        {
            ans=max(ans,bit[idx]);
            idx-=idx&-idx;
        }
        return ans;
    };

    ll ans=0;

    for(int i=0;i<n;i++)
    {
        int pos=lower_bound(comp.begin(),comp.end(),val[i])-comp.begin()+1;

        ll cur=query(pos-1)+val[i];

        update(pos,cur);

        ans=max(ans,cur);
    }

    cout<<fixed<<setprecision(9)<<ans*acos(-1.0);

    return 0;
}