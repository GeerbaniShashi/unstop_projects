#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n; cin>>n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];
    ll sum = 1;
    for(ll i=1; i<n; i++) {
        if(a[i] == a[i-1]) {
            sum += 1;
        } else {
            sum = sum + abs(b[i] - b[i-1]);
            sum += 1;
        }
    }
    cout<<sum<<endl;

    return 0;
}
