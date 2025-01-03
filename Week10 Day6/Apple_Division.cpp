#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        deque<ll>dq;
        ll sum=0;
        for(int i=1; i<=n; i++){
            ll x;
            cin>>x;
            sum+=x;
        }
        ll v=dq[0];
        sort(dq.rbegin(), dq.rend());
        // dq.pop_front();
        deque<ll>prefix;
        prefix[0]=dq[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+dq[i];
        }
        int i=0,track=INT_MAX;
        for(int j=n-1; j>=n; j--){

        }
    }
}