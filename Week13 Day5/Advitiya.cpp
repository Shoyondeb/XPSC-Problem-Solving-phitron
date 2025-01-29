#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string st="ADVITIYA";
        string str="ZARAGOZA";
        cin>>str;
        int ans=0;
        for(int i=0; i<8; i++){
            int x,s,s2; 
            int y;
            s2=st[i]-97;
            s=str[i]-97;
            if(s>s2){
            y=122-str[i];
            y+=s2;
            ans+=y+1;
            }else{
            x=(s2-s);
            ans+=x;
            }
        }
        cout<<ans<<endl;
    } 
    return 0;
}