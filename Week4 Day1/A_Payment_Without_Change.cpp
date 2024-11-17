#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n,s;
        cin>>a>>b>>n>>s; 
        ll p=a*n;
        if(b>=s){
            cout<<"YES\n";
        }else if(p>s){ 
            ll rest=p-s;
            ll t=s;
            ll mod=rest%n;
            n-=mod;
            t-=n;
            if(t+b>=s){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if(a*n==s || (a*n)+b>=s){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}