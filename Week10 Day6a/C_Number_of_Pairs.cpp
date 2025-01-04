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
        vector<ll>vec;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                ll value=vec[i]+vec[j];
                if(value>=k && value<=q){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}