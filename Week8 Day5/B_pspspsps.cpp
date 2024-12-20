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
        int dot=0, s=0, p=0;
        if(str[0]=='s'){
            cout<<"YES\n";
        }else{
        for(int i=0; i<n; i++){
           if(str[i]=='.'){
            dot++;
           }else if(str[i]=='p'){
            p++;
           }
        }
        if(dot==n){
            cout<<"YES\n";
        }else if(p==n){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        }

    }
    return 0;
}