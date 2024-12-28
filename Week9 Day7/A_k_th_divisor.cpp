#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin>>n>>k;
    vector<ll>vec; 
    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
            vec.push_back(i);
            ll val=n/i;
            if(i!=val)
            vec.push_back(val);
        }
    }
    sort(vec.begin(), vec.end());
    if(vec.size()<k){
        cout<<-1<<endl;
    }else
    cout<<vec[k-1]<<endl;
    return 0;
}