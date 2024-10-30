#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;  map<string, int>mp;
    while(t--){
        string str;
        cin>>str; 
        if(mp[str]==0){
            cout<<"NO\n";
            mp[str]++;
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}