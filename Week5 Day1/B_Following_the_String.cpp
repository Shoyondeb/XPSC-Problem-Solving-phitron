#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<char, int>mp;
        for(int i=97; i<=122; i++){
            char c=i;
            mp[c]=0;
        }
        string str;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            for(auto [x1,y]: mp){
                if(x==y){
                    str.push_back(x1);
                    mp[x1]=y+1;
                    break;
                }
            }
        }
        cout<<str<<endl;
    }
    
    return 0;
}