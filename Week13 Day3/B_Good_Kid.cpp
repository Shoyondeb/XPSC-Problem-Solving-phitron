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
        deque<int>dq;
        int mini=INT_MAX, ans=1,oc=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mini=min(x,mini);
            if(x!=0)
            ans*=x;
            if(x==0) oc++;
        } 
        if(mini>0)
        ans/=mini;
        mini++;
        if(oc>1){
            cout<<"0\n";
        }else
        cout<<ans*mini<<endl;
    }
    return 0;
}