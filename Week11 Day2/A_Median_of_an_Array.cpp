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
        int div=n/2;
        if(n%2!=0) div++;
        deque<ll>dq;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            dq.push_back(x);
        }
        sort(dq.begin(), dq.end());
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        ll value=dq[div-1];
        int same=0;
        for(int i=div-1; i<n; i++){
            if(value==dq[i]){
                same++;
            }
        } 
        
            cout<<same<<endl; 
    }
    return 0;
}