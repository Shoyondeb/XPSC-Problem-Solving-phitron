#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll k=n;
        deque<ll>dq; 
        deque<ll>dq3;
        map<int,int>mp;
        while(k--){
        for(int i=0; i<n-1; i++){
            int x;
            cin>>x;
            if(dq3.size()<n-1){
                dq3.push_back(x); 
                mp[x]=1;
            }
            dq.push_back(x);
        }
        } 
        int vlaue=0;
        for(int i=1; i<=n; i++){
            if(mp[i]==0){
                vlaue=i;
                break;
            }
        }
        if(vlaue==1){
            dq3.push_front(vlaue);
        }else{
            dq3.push_back(vlaue);
        }
        for(int i:dq3){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}