#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            mp[x]=i;
        }
        int ans=0;
        for(auto [x,y]:mp){
            ans+=y;
        }
        cout<<ans<<endl;
    }
    return 0;
}