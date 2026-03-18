#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
    ll n; cin>>n;
    ll best = 0, score = 0;
    for(ll i=0; i<n; i++) {
        ll over_number[6], ball_in_over[6], runs_scored[6], is_boundary[6], is_wicket[6];
        ll runs = 0, boundaries = 0, wickets = 0;
        for(ll j=0; j<6; j++) {
            cin>>over_number[j]>>ball_in_over[j]>>runs_scored[i]>>is_boundary[j]>>is_wicket[j];
            runs+=runs_scored[i];
            if(is_boundary[j] == 1) boundaries += 1;
            if(is_wicket[j] == 1) wickets += 1;
            ll answer = (runs * 2) + (boundaries * 3) - (wickets * 5);
        if(answer > score || (score == 0 && answer == 0)) {
             score = answer;
             best = over_number[j];
        }
        }
    }
    cout<<best<<" "<<score<<endl;
    return 0;
}