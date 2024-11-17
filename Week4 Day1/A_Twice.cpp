#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, count=0;
        cin>>n;
        map<int,int>mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto [x,y]: mp){
            count+=(y/2);
        }
        cout<<count<<endl;
    }
    return 0;
}