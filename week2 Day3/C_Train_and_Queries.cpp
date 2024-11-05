#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k; 
        map<int , set<int>>mp;
     
        for(int i=1; i<=n; i++){
            int x;
            cin>>x; 
            mp[x].insert(i);
        }
        again:
        while(k--){
            int a, b;
            cin>>a>>b;
            if(mp.find(a)==mp.end() || mp.find(b)==mp.end()){
                cout<<"NO\n";
                goto again;
            }
            auto it=mp[a].begin();
            auto it2=mp[b].rbegin();
            
            if(*it<*it2){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}