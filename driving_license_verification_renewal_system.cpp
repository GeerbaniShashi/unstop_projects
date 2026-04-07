#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll n, c;
    cin>>n>>c;
    ll id[n], age[n], experience[n], issue_year[n];
    for(ll i=0; i<n; i++)
    {
        cin>>id[i]>>age[i]>>experience[i]>>issue_year[i];
    }
    vector<ll>v1, v2;
    for(ll i=0; i<n; i++)
    {
        if(age[i] >= 18 && experience[i] >= 1 && issue_year[i] == 0)
        {
            v1.push_back(id[i]);
        }
    }
    for(ll i=0; i<n; i++)
    {
        if(age[i] >= 18 && experience[i] >= 1 && (c - issue_year[i]) > 5 && issue_year[i] != 0)
        {
            v2.push_back(id[i]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if(v1.size() == 0) cout<<"-1"<<endl;
    else
    {
        for(ll i=0; i<v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
    if(v2.size() == 0) cout<<"-1"<<endl;
    else
    {
        for(ll i=0; i<v2.size(); i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

