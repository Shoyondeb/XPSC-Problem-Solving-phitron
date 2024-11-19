#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ios:
    ll n, s;
    cin>>n>>s;
    ll l=0, sum=0, ans=0, ind;
    vector<ll>vec;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        vec.push_back(x);
        sum+=x;
        if(sum<=s){
            ans=max(ans,(i-l)+1);
        }else{
            sum-=vec[l];
            l++;
        }
    }
    cout<<ans<<endl;
    return 0;
}