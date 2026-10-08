#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, q;
    cin>>n>>q;
    ll a[n];
    vector<ll>vx(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        vx.push_back(0);
    }
    while(q--)
    {
        string s;
        cin>>s;
        if(s == "RANK")
        {
            ll l, r, k;
            cin>>l>>r>>k;
            vector<ll>v;
            for(ll i=l-1; i<r; i++)
            {
                v.push_back(a[i]);
            }
            sort(v.begin(), v.end());
            cout<<v[k-1]<<endl;
        }
        else if(s == "FLAG")
        {
            ll x;
            cin>>x;
            for(ll i=0; i<vx.size(); i++)
            {
                if(i == x - 1)
                {
                    if(vx[i] == 0)
                    {
                        vx[i] = 1;
                    }
                    else
                    {
                        vx[i] = 0;
                    }
                    break;
                }

            }
        }
        else if(s == "AUDIT")
        {
            ll l, r;
            cin>>l>>r;
            ll count = 0;
            for(ll i=l-1; i<r; i++)
            {
                if(vx[i] == 1) count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
