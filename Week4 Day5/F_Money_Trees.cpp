#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<ll>vec1;
        vector<ll>vec2;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec1.push_back(x);
        }
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            vec2.push_back(x);
        }

        int i=0, j=1;
        ll sum=vec1[0];
        int ans=0;
        if(sum<=k) ans=1;
        while(j<n){
            if(vec2[j-1]%vec2[j]==0){
                sum+=vec1[j];
            }else{
                sum=vec1[j];
                i=j;
            }
            while(sum>k){
                sum-=vec1[i];
                i++;
            }
            ans=max(ans,(j-i)+1);
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}