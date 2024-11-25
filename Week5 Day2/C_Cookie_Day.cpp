#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll ans=INT_MAX;
        int count=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x<k){
                count++;
            }else{
                ll mod=x%k;
                ans=min(ans, mod);
            }
        }
        if(count==n){
            cout<<-1<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    return 0;
}