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
        string str;
        cin>>str;
        map<char, int>mp;
        int ans=0;
        for(int i=0; i<n-2; i++){
            mp['B']=0;
            mp['R']=0; 
            mp['G']=0;
            mp[str[i]]++;
            mp[str[i+1]]++;
            mp[str[i+2]]++;
            if(mp['B']==0) ans++;
            if(mp['R']==0) ans++;
            if(mp['G']==0) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}