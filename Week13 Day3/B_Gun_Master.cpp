#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, d;
        cin>>n>>d;
        int c=1,l=0;
        int ans=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x<=d && c==0){
                ans++;
                c=1;
                l=0;
            }
            if(x>d && l==0 ){
                ans++;
                l=1;
                c=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}