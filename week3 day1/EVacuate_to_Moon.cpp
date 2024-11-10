#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)    {
        ll n,m,h;
        cin>>n>>m>>h;
        deque<ll>mst1;
        deque<ll>mst2;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            mst1.push_back(x);
        }
        for(int i=0; i<m; i++){
            ll x;
            cin>>x;
            mst2.push_back(x);
        }
        ll countt=0;
        sort(mst1.begin(), mst1.end(), greater<int>());
        sort(mst2.begin(), mst2.end(), greater<int>());
        while(!mst1.empty() && !mst2.empty()){
            ll val1=mst1.front();
            ll val2=mst2.front();
            mst1.pop_front();
            mst2.pop_front();
            ll mult1=val2*h;
            if(mult1>val1){
                countt+=val1;
            }else{
                countt+=mult1;
            } 
        }
        cout<<countt<<endl;
    }
    return 0;
}