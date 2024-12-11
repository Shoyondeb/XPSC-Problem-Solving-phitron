#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
        while(t--)
        {
            ll n; 
            cin>>n;
            deque<ll> dq;
            for(int i=0; i<=__lg(n); i++)
            {
                if((n>>i)&1)
                {
                    ll value = n-(1LL<<i);
                    if(value>0)
                    {
                        dq.push_front(value);
                    }
                }
            }
            dq.push_back(n);
            cout<<dq.size()<<'\n';
            for(auto v:dq)
            {
                cout<<v<<" ";
            }
            cout<<'\n';
        }
    return 0;
}