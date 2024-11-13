#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    map<int,int>mp;
    multiset<int>init;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        mp[x]=i;
        init.insert(x);
    }
    multiset<int>mset;
    for(int i=1; i<=m; i++){
        int x; 
        cin>>x;
        auto it=init.lower_bound(x);
        if(it==init.begin()){
            cout<<0<<" ";
        }else{
        it--;
        int p=*it;
        cout<<mp[p]<<" ";
        }
    } 
    return 0;
}