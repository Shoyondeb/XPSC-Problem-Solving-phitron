#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    vector<ll>vec;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        vec.push_back(x);
    }
    int l=0, r=0, count=0,sum=0;
    while(l<n){
        sum+=vec[l];
        if(sum==k){
            count++;
        }else{
            while(sum>k){
            sum-=vec[r];
            r++;
            }
            if(sum==k)
            count++;
        }
        l++;
    }
    cout<<count<<endl;
    return 0;
}