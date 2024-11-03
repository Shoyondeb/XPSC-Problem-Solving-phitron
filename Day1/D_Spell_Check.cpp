#include <bits/stdc++.h>
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
        if(n==5){
            for(int i=0; i<n; i++){
                mp[str[i]]++;
            } 
            int flag=0;
            string str2;
            str2="Timur";
            for(int i=0; i<str2.size(); i++){
                if(mp[str2[i]]==1){
                    continue;
                }else{
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}