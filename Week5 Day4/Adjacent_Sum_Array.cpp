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
        for(int i=0; i<n-1; i++){
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end(),greater<int>());
        deque<ll>dq;
        ll init=vec[0];
        if(init%2!=0){
            dq.push_back((init/2)+1);
            dq.push_back(init/2);
        }else{
           dq.push_back(init/2);
           dq.push_back((init/2));  
        }
        for(int i=1; i<n-1; i++ ){
            ll value=vec[i]-dq.back();
            dq.push_back(value); 
        }
         
        for(int i: dq){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}