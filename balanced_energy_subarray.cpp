#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n, k; cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    ll count = 0;
    if(k % 2 == 0) {
        for(ll i=0; i<n; i++) {
        ll sum1 = 0, sum2 = 0;
        for(ll j=i; j<i+(k/2); j++) {
           sum1 += a[j];
        }
        for(ll j=i+(k/2); j<i+k; j++) {
           sum2 += a[j];
        }
        if(sum1 == sum2) count++;
    }
    } else {
        for(ll i=0; i<n; i++) {
        ll sum1 = 0, sum2 = 0;
        for(ll j=i; j<i+(k/2); j++) {
           sum1 += a[j];
        }
        for(ll j=i+(k/2)+1; j<i+k; j++) {
           sum2 += a[j];
        }
        if(sum1 == sum2) count++;
    }
    }
    cout<<count<<endl;
    return 0;
}
