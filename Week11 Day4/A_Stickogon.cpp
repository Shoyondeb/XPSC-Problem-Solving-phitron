#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int ans=0;
        for(auto [x,y]:mp){
            ans+=(y/3);
        }
        cout<<ans<<endl;
    }
    return 0;
}