#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        multiset<int>mset;
        ll su=0;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            if(x==0){
                if(!mset.empty()){
                    auto it=mset.find(*mset.rbegin());
                    su+=*mset.rbegin();
                    mset.erase(it);
                }
            }else{
                mset.insert(x);
            }
        }
        cout<<su<<endl;
    }
    return 0;
}