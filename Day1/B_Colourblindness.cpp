#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str, str2;
        cin>>str>>str2;
        int flag=0;
        for(int i=0; i<str.size(); i++){
            if(str[i]==str2[i] || (str[i]=='G' && str2[i]=='B') || str[i]=='B' && str2[i]=='G'){
                continue;
            }else{
                flag=1;
            }
        }
        if(flag==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}