#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n; cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    ll sum = a[0];
    for(ll i=1; i<n; i++) {
        sum += (a[i] - a[i-1]);
    }
    cout<<sum<<endl;
    return 0;
}