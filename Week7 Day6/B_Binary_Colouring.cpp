#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int> vec;
        int val;
        while(n)
        {
            val=n%4;
            if( val==0 || val==2 )
            {
                vec.push_back(0);

            }
            else if(val==3)
            {
                vec.push_back(-1);
                n++;
            }
            else
            {
                vec.push_back(1);
            }
            n/=2;
        }
        cout<<vec.size()<<'\n';
        for(auto val1:vec)
        {
            cout<<val1<<" ";
        }
        cout<<'\n';
    }
}