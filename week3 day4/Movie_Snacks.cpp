#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll d=a+b;
    if(c<d){
        cout<<(2*c)+b<<endl;
    }else{
        cout<<(2*d)+b<<endl;
    }
    return 0;
}