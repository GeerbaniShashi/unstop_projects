#include<bits/stdc++.h>
#define ll long long int 
using namespace std;


int main() {
    ll n; cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    ll count = 0;
    for(ll i=0; i<n-1; i++) {
        ll sum = a[i], maximum = a[i];
        for(ll j=i+1; j<n; j++) {
            sum += a[j];
            maximum = max(maximum, a[j]);
            if(2*maximum > sum) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}