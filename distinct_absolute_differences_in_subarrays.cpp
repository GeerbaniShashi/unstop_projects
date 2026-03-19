#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n; cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }
    set<ll>st;
    for(ll i=0; i<n-1; i++) {
        for(ll j=i+1; j<n; j++) {
            ll x = abs(a[i] - a[j]);
            st.insert(x);
        }
    }
    cout<<st.size()<<endl;
    return 0;
}