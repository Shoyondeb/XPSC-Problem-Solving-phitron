#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        int zero=0, nzero=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec.push_back(x);
            if(x==0){
                zero++;
            }else
            nzero++;
        }
        int ans=0;
        if(zero==0){
            ans=0;
        }else{
            if(nzero>=zero-1){
                ans=0;
            }else{
                int mx=*max_element(vec.begin(), vec.end());
                if(mx==1){
                    ans=2;
                }else{
                    ans=1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}