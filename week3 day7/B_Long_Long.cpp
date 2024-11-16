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
        vector<ll>vec;
        ll value=1, count=0,sum=0;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            ll v=x;
            sum+=abs(v);
            if(value>0 && x<0){
                value=x;
                count++;
            }else if(x>0){
                value=x;
            }
        }
        cout<<sum<<" "<<count<<endl;
    }
    return 0;
}