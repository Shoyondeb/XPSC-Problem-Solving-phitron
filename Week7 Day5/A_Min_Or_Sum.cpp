#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void asquare()
{
    ll n;
    cin>>n;
    vector<int>vec;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        vec.push_back(x);
    }
    ll x=0;
    for(int i=0; i<n; i++)
    {
        x|=vec[i];
    }
    cout<<x<<"\n";
}  
int main()
{ 
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    } 
    return 0;
}