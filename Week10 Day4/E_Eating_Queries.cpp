#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n, q,sum=0;
        cin>>n>>q;
        vector<ll>mset;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            sum+=x;
            mset.push_back(x);
        }
        sort(mset.rbegin(), mset.rend());
        vector<ll>prefix(n);
        prefix[0]=mset[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+mset[i];
        }
        for(int i=1; i<=q; i++){
            ll x;
            cin>>x;
            if(x>prefix[prefix.size()-1]){
                cout<<-1<<endl;
            }else{
                int f=0,l=prefix.size()-1,flag=-1;
                while(f<=l){
                    int mid=(f+l)/2;
                    if(prefix[mid]>=x){
                        flag=mid+1;
                        l=mid-1;
                    }else if(prefix[mid]<x){
                        f=mid+1;
                    }
                }
                cout<<flag<<endl;
            }
        }
    }
    return 0;
}