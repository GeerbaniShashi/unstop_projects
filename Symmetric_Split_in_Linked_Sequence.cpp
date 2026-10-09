#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    reverse(b, b+n);
    ll count = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            count = 1;
            break;
        }
    }
    if(count == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
