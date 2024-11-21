#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin>>n>>k;
    vector<ll>vec;
    ll sum=0,ans=INT_MAX, l=0;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        sum+=x;
        if(sum>=k){
            ans=min(ans, (i-l)+1);
            l=i;
            sum=x;
        }
    }
    cout<<ans<<endl;

    return 0;
}