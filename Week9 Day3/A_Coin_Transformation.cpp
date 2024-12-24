#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count=0;
        while(n>3){
            n/=4;
            count++;
        }
       ll ans;
       ans=pow(2,count);
        cout<< ans<<endl;
    }
    return 0;
}