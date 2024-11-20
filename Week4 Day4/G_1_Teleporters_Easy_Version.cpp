#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>vec;
        for(int i=1; i<=n; i++){
            ll x;
            cin>>x;
            vec.push_back(x+i);
        }
        int count=0;
        sort(vec.begin(), vec.end());
        for(int i=0; i<n; i++){
            if(k>=vec[i]){
                count++;
                k-=vec[i];
            }else{
                break;
            }
        }
    cout<<count<<endl;
    }
    return 0;
}