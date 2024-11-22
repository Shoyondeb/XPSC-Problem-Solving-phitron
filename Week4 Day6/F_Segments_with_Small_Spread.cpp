#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin>>n>>k;
    multiset<ll>mp;
    vector<ll>vec;
    ll ans=0;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        vec.push_back(x);
    }
    ll l=0, r=0;
    while(r<n){
        mp.insert(vec[r]);
        if(*mp.rbegin()-*mp.begin()<=k){
            ans+=(r-l)+1;
        }else{
            while(l<=r){
                if(*mp.rbegin()-*mp.begin()<=k){ 
                  break;
                }
                mp.erase(mp.find(vec[l]));
                l++;
            }
            if(*mp.rbegin()-*mp.begin()<=k){
                  ans+=(r-l)+1; 
            }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}