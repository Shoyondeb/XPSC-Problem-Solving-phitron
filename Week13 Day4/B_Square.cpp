#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if((a+x==b && y==b) || (a+y==b && x==b) || (b+x==a && y==a) ||(b+y==a && x==a)){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}