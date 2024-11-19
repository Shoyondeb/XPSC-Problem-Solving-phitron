#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll a, b,c;
    cin>>a>>b>>c;
    if(b>=a){
        b=a;
    }else{
        b=b;
    }
    ll sum=b;
    for(int i=0; i<c; i++){
        ll x;
        cin>>x;
        if(x<a){
            sum+=x;
        }else{
            sum+=(a-1);
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}