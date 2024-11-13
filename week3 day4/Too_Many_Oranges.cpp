#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int l=n*10;
        int u=n*12;
        if(k>=l && k<=u){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}