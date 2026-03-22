#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n, k; cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    ll x; cin>>x;
    ll sum = 0;
    for(ll i=0; i<n; i++) {
        sum += a[i];
    }
    if(sum > (k*x)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
