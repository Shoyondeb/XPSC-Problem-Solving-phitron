#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        if(n==m){
            cout<<"Yes\n";
        }else if(n<m){
            cout<<"No\n";
        }else{
            int v=n-m;
            if(v%2==0){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}