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
        vector<ll>vec;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        ll last=vec.back();
        vec.pop_back();
        ll last_1=vec.back();
        vec.pop_back();
        ll sum=0;
        sort(vec.begin(), vec.end());
        for(int i=0; i<vec.size(); i++){
            sum+=(last_1-vec[i]);
        }
        cout<<last-sum<<endl;
    }
    return 0;
}