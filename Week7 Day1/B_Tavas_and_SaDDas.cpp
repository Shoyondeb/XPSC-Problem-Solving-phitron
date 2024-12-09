#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll N=10e9;
    cout<<N<<endl;
    int n;
    cin>>n;
    ll value=n;
    bool ans=true;
    set<ll>st;
    for(int i=4; i<=n; i++){
        ll n1=i;
        ll n2=i;
    while(n1!=0){
        int p=n%10;
        if(p==4 || p==7){
            continue;
        }else{
            ans=false;
        }
        n1/=10;
        if(n1==0 && ans==true){
            st.insert(n2);
    }
    }
    }
    auto p=st.find(n);
    cout<<*p<<endl;

    return 0;
}