#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<=n-k; i++)
    {
        ll maximum = INT_MIN;
        for(ll j=i; j<min(i+k, n); j++)
        {
            maximum = max(maximum, a[j]);
        }
        ll count = 0;
        for(ll j=i; j<min(i+k,n); j++)
        {
            if(a[j] == maximum) count++;
        }
        cout<<maximum<<" "<<count<<endl;
    }
    return 0;
}
