#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a, b, n;
        cin>>a>>b>>n; 
        ll sum=b-1;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x; 
            sum+=min(x, a);
        }
        cout<<sum<<endl;

    }
    return 0;
}