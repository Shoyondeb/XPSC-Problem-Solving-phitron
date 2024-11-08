#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    again:
    while(t--){
        int n; char c;
        cin>>n>>c;
        string str1, str2;
        cin>>str1;
        str2=str1+str1;
        set<int>dist;
        int maxi=INT_MIN;
        int flag=0, rpos, gpos;
         if(c=='g'){
            cout<<0<<endl;
            goto again;
        }
        for(int i=0; i<str2.size(); i++){ 
            if(str2[i]==c && flag==0){
                rpos=i+1;
                flag=1;
            }else if(str2[i]=='g' && flag==1){
                if(maxi<((i-rpos)+1)){
                    maxi=((i-rpos)+1);
                }
                flag=0;
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}