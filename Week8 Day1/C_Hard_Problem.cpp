#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, a,b,c;
        cin>>n>>a>>b>>c;
        int sum=0, ans=0;
        int dif=0;
        if(a<=n){
            ans+=a;
             
            dif+=n-a;
        }else{
            ans+=n;
        }
        if(b<=n){
            ans+=b;
            
            dif+=n-b;
        }else{
            ans+=n;
        }
        if(dif>0){
            if(dif>=c){
                ans+=c;
            }else{
                ans+=dif;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}