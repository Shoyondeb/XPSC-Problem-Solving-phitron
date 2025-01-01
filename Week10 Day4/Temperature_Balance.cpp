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
        ll value=0, sum=0;
        for(int i=0; i<n; i++){
            value+=dq[i];
            sum+=abs(value);
        }
        cout<<sum<<endl;
    }
    return 0;
}