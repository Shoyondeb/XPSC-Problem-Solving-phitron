#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        map<char,int>mp;
        for(int i=0; i<n; i++){
            mp[str[i]]++;
        }
        int odd=0;
        for(auto [a,b]:mp){
            if(b%2!=0){
                odd++;
            }
        } 
        if(odd<=(k+1)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}