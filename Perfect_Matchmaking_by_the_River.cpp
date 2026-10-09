#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll>v1, v2;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v1.push_back(x);
    }
    for(ll i=0; i<m; i++)
    {
        ll y;
        cin>>y;
        v2.push_back(y);
    }
    ll count = 0;
    for(ll i=0; i<v1.size(); i++)
    {
        for(ll j=0; j<v2.size(); j++)
        {
            if(abs(v1[i] - v2[j]) <= k)
            {
                count++;
                v2.erase(v2.begin() + j);
                j--;
                break;
            }
        }
        v1.erase(v1.begin() + i);
        i--;
    }
    cout<<count<<endl;
    return 0;
}
