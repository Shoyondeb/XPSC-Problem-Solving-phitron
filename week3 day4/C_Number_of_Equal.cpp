#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    map<ll, ll>mp;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    ll count=0;
    for(int i=0; i<m; i++){
        ll x;
        cin>>x;
         count+=mp[x];
    }
    cout<<count<<endl;
    return 0;
}