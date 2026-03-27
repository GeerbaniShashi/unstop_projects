#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    vector<ll> numbers;
    for (ll i = 0; i < input.length(); i++)
    {
        if (input[i] == '[' || input[i] == ']' || input[i] == ',')
        {
            input[i] = ' ';
        }
    }
    stringstream ss(input);
    ll temp;
    while (ss >> temp)
    {
        numbers.push_back(temp);
    }
    if(numbers.size() % 2 == 0)
    {
        cout<<'[';
        for(ll i=0; i<numbers.size(); i+=2)
        {
            if(i < numbers.size() - 2) cout<<numbers[i+1]<<", "<<numbers[i]<<", ";
            else cout<<numbers[i+1]<<", "<<numbers[i];
        }
        cout<<']'<<endl;
    }
    else
    {
        cout<<"[";
        for(ll i=0; i<numbers.size()-1; i+=2)
        {
            cout<<numbers[i+1]<<", "<<numbers[i]<<", ";
        }
        cout<<numbers[numbers.size() - 1]<<']'<<endl;
    }
    return 0;
}
