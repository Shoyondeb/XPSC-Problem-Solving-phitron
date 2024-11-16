#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,q;
        cin>>n>>k>>q;
        ll len=0, x,ans=0;
        for(int i=0; i<n; i++){ 
            cin>>x;
            if(x<=q){
                len++;
            }else{
                if(len>=k){
                ans+=(len-k+1)*(len-k+2); 
                }
                len=0;
            } 
        }
        if(len>=k){
            ans+=(len-k+1)*(len-k+2); 
        }
        cout<<ans/2<<endl;
    }
    return 0;
}