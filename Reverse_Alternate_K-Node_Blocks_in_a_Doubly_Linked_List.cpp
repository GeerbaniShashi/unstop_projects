#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i+= 2*k)
    {
        ll end = min(n, i+k);
        reverse(a + i, a + end);
    }
    for(ll i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
