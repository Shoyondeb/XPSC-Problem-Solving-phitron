#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(105,0);
        vector<int>vec2(105,0);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(vec[x]==0)
            vec[x]=1;
            else
            vec2[x]=1;
        }
        int ans=0;
        for(int i=0; i<=100; i++){
            if(vec[i]==0){
                ans+=i;
                break;
            }
        }
        for(int i=0; i<=100; i++){
            if(vec2[i]==0){
                ans+=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}