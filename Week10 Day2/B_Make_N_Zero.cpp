#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res1=n%3;
        int res2=n%4;
        if(n<=2){
            cout<<"NO\n";
        }else if(res1==0 || res2==0 || res2==3){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}