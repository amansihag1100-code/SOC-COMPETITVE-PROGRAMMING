#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;

int d[N + 1];

struct BIT
{
    int n;
    vector<long long> bit;

    BIT(int sz)
    {
        n = sz;
        bit.resize(n + 1);
    }

    void update(int idx, int val)
    {
        while(idx <= n)
        {
            bit[idx] += val;
            idx += idx & (-idx);
        }
    }

    long long sum(int idx)
    {
        long long s = 0;
        while(idx > 0)
        {
            s += bit[idx];
            idx -= idx & (-idx);
        }
        return s;
    }

    long long query(int l,int r)
    {
        return sum(r) - sum(l - 1);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=1;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
            d[j]++;
    }

    int n,m;
    cin>>n>>m;

    vector<int> a(n+1);

    BIT ft(n);

    set<int> st;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        ft.update(i,a[i]);

        if(a[i]>2)
            st.insert(i);
    }

    while(m--)
    {
        int t,l,r;
        cin>>t>>l>>r;

        if(t==1)
        {
            auto it=st.lower_bound(l);

            while(it!=st.end() && *it<=r)
            {
                int pos=*it;

                int old=a[pos];
                a[pos]=d[a[pos]];

                ft.update(pos,a[pos]-old);

                if(a[pos]<=2)
                    st.erase(it++);
                else
                    it++;
            }
        }
        else
        {
            cout<<ft.query(l,r)<<"\n";
        }
    }

    return 0;
}