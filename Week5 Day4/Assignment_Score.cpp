#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0, total=(n*100)+100;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            sum+=x;
        }
        total/=2;
        int ans=total-sum;
        if(ans>100){
            cout<<-1<<endl;
        }else if(sum>=total){
            cout<<0<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    return 0;
}