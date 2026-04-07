#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t, x; cin>>t>>x;
    while(t--) {
        ll n; cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++) cin>>a[i];
        sort(a, a+n, greater<ll>());
        ll count = 0, sum = 0;
        for(ll i=0; i<n; i++) {
            sum += a[i];
            if(sum < x) count++;
            else {
                count++;
                break;
            }
        }
        if(sum < x) cout<<"-1"<<endl;
        else cout<<count<<endl;
    }
    return 0;
}
