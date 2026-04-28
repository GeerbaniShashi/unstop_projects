#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin>>n>>m;
    vector<ll>v1, v2;
    ll sum1 = 0, sum2 = 0;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v1.push_back(x);
        sum1 += v1[i];
    }
    for(ll i=0; i<m; i++)
    {
        ll y;
        cin>>y;
        v2.push_back(y);
        sum2 += v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    ll sum = 0;
    ll count = 0;
    for(ll i=0; i<v1.size(); i++)
    {
        for(ll j=0; j<v2.size(); j++)
        {
            if(v1[i] <= v2[j])
            {
                sum += abs(v2[j] - v1[i]);
                v2.erase(v2.begin() + j);
                count++;
                break;
            }
        }
    }
    if(m == 0 || sum1 > sum2 || count != n) cout<<"-1"<<endl;
    else cout<<sum<<endl;
    return 0;
}
