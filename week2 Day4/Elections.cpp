#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        int count=0;
        vector<int>vec1,vec2;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            vec1.push_back(x);
        }
        for(int i=0; i<n; i++){
            ll val;
            cin>>val;
            vec2.push_back(val);
        }
        for(int i=0; i<n; i++){
            if(vec1[i]>vec2[i]){
                count++;
            }else{
                int dif=vec2[i]-vec1[i];
                dif++;
                if(x>=dif && (vec1[i]+dif)>vec2[i]){
                    x-=dif;
                    count++;
                }
            }
        }
        if(((n/2)+1)<=count){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}