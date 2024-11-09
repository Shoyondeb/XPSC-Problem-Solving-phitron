#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        set<int>st;
        for(int i=0;i<b;i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        string s2;
        cin>>s2;
        sort(s2.begin(),s2.end());
        int ind=0;
        for(auto it : st){
            s[it-1]=s2[ind];
            ind++;
        }
        cout<<s<<endl;
    }
}