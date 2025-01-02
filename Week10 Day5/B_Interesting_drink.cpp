#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    deque<ll>deque;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        deque.push_back(x);
    }
sort(deque.begin(), deque.end());
    ll q;
    cin>>q;
    while(q--){
       ll value;
       cin>>value;
       int i=0, l=n-1, flag=0;
       while(i<=l){
        int mid=(i+l)/2;
        if(deque[mid]<=value){
            flag=mid+1;
            i=mid+1;
        }else{
            l=mid-1;
        }
       }
       cout<<flag<<endl;
    }
    return 0;
}