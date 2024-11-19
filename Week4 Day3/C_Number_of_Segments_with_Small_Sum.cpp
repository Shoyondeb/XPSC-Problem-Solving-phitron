#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, value;
    cin>>n>>value;
    vector<ll>vec;
    ll ans=0, l=0, sum=0;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        vec.push_back(x);
        sum+=x;
        if(sum<=value){
            ans+=(i-l)+1;
        }else{
            while(sum>value){
                
                sum-=vec[l];
                l++;
                if(sum<=value){
                    ans+=(i-l)+1;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}