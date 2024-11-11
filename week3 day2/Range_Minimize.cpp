#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        deque<ll>dq;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            dq.push_back(x);
        }
        sort(dq.begin(), dq.end());
        ll min1=dq[n-1]-dq[2];
        ll min2=dq[n-3]-dq[0];
        ll min3=dq[n-2]-dq[1];
        ll fmini1=min(min1,min2);
        ll fn=min(fmini1,min3);
        cout<<fn<<endl;
     
    }
    return 0;
}