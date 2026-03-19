#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
    ll n;
    cin>>n;
    string s[n];
    for(ll i=0; i<n; i++) {
        cin>>s[i];
    }
    ll count = 0, sum = 0;
    for(ll i=0; i<n; i+=pow(2,count)) {
        if(s[i] != "N")sum+=stoll(s[i]);
        count++;
    }
    ll x = sqrt(sum);
    if(x*x == sum) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
