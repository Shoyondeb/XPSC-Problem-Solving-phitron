#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>strs;
    while(t--){
        
        string str;
        cin>>str;
        strs.push_back(str);
    }
    map<string,int>mp;
    string final;
    for(int i=strs.size()-1; i>=0; i--){
        if(mp[strs[i]]==0){
            string p=strs[i];
            final.push_back(p[p.size()-2]);
            final.push_back(p[p.size()-1]);
            mp[strs[i]]=1;
        }
    }
    cout<<final<<endl;
    return 0;
}