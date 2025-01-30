#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        for(int i=0; i<n-1; i++){
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        ll sum;
        cin>>sum;
        sort(vec.begin(), vec.end(), greater<int>());
        sum+=vec[0];
        cout<<sum<<endl;
    }
    return 0;
}