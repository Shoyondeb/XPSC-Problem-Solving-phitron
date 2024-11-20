#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            mp1[i]=x;
        }
        int count=0;
        for(int i=1; i<=m; i++){
            int x;
            cin>>x;
            if(mp1[x]>0){
                mp1[x]--;
            }else{
                count++;
            }
        }
         
        cout<<count<<endl;
    }
    return 0;
}