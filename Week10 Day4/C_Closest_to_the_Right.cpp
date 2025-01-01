#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin>>n>>k;
    deque<ll>dq;
    for(int i=1; i<=n; i++){
        ll x;
        cin>>x;
        dq.push_back(x);
    }
    vector<int>vec;
    for(int i=1; i<=k; i++){
         ll x;
         cin>>x;
         int f=0, l=n-1, flag=n+1;
         while(f<=l){
            int mid=(f+l)/2;
            if(x<=dq[mid]){
                flag=mid+1;
                l=mid-1;
            }else{
                f=mid+1;
            }
         }
         vec.push_back(flag);
    }
    for(int i:vec){
        cout<<i<<endl;
    }
    return 0; 
}