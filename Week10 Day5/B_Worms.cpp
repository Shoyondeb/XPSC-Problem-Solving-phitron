#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    deque<int>deque;
    cin>>n;
    map<ll, ll>mp;
    ll value=0;
    for(int i=1; i<=n; i++){
        ll x;
        cin>>x; 
        ll ind=x;
        for(int j=1; j<=ind; j++){
            value++;
            mp[value]=i;
        }
        
    }
     ll m;
     cin>>m;
     for(int i=0; i<m; i++){
        ll v;
        cin>>v;
        cout<<mp[v]<<endl;
     }
    return 0;
}