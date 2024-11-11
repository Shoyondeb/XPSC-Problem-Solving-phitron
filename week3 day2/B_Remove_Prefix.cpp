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
        map<int,int>mp;
        deque<ll>dq;
        int pos=0;
        for(ll i =0; i<n; i++){
            int x;
            cin>>x;
            dq.push_back(x); 
        }
        for(int i=dq.size()-1; i>=0; i--){
            mp[dq[i]]++;
            if(mp[dq[i]]>1){
                pos=i+1;
                break;
            }
        }
        cout<<pos<<endl;

    }
    return 0;
}