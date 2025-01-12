#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<ll>vec;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            vec.push_back(x);
        }
    sort(vec.begin(), vec.end());
    int maxi=0, count=0;
    for(int i=0; i<n-1; i++){
        if(abs(vec[i]-vec[i+1])<=k){
            count++;
            if(count>maxi){
                maxi=count;
            }
        }else{
            count=0;
        }
    }
    cout<<abs((maxi+1)-n)<<endl;
    }
    return 0;
}