#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }else if(n<=4){
            cout<<2<<endl;
        }else{
            int ans=2, sum=4;
            while(sum<n){
                ans++;
                sum++;
                sum*=2;
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}