#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    multiset<ll>mset;
    cin>>n; 
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        mset.insert(x);
    }
    ll q;
    cin>>q;
  
    for(int i=0; i<q; i++){
        ll x;
        cin>>x;
        auto it1=mset.lower_bound(x);
        auto it2=mset.upper_bound(x);
         
        --it1;
        if(it1==--mset.begin()){
            cout<<"X ";
        }else{
            cout<<*it1<<" ";
        }
        if(it2==mset.end()){
            cout<<"X\n";
        }else{
            cout<<*it2<<endl;
        }
    } 
    return 0;
}