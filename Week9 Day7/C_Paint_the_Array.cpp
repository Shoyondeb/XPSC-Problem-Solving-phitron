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
        ll gcd1=0, gcd=0;
        for(int i=0; i<n; i+=2){
            gcd1=__gcd(gcd1, dq[i]);
        }
        for(int i=1; i<n; i+=2){
            gcd=__gcd(gcd, dq[i]);
        }
        bool flag=true;
        for(int i=1; i<n; i+=2){
            if(dq[i]%gcd1==0){
                flag=false;
            } 
        }
        if(flag==true){
            cout<<gcd1<<endl;
        }else{
            bool flag=true;
        for(int i=0; i<n; i+=2){
            if(dq[i]%gcd==0){
                flag=false;
            } 
        }
        if(flag==true){
            cout<<gcd<<endl;
        }else{
            cout<<0<<endl;
        }
        }
    }
    return 0;
}