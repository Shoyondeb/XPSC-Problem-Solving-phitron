#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll  n, k;
    cin>>n>>k;
    deque<ll>dq1; 
    for(ll i=1; i<=n; i++){
        ll x;
        cin>>x;
        dq1.push_back(x);
    }
    vector<ll>vec;
    for(ll i=1; i<=n; i++){
        ll x;
        cin>>x;
        ll f=0, l=n-1, flag=0;
        while(f<=l){
            int mid=(f+l)/2;
            if(x>=dq1[mid]){
                f=mid+1;
                flag=mid+1;
            }else {
                l=mid-1;
            } 
             
    }
    vec.push_back(flag);
    }
    for(ll i:vec){
        cout<<i<<endl;
    }
    
    return 0;
}