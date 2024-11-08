#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n, te, q;
        cin>>n>>te>>q;
        long long int k, p;
        cin>>k>>p;
        int a=min(k,p);
        int b=max(k,p);
        
        long long int q1;
        cin>>q1;
        if(q1<a){
            cout<<a-1<<endl;
        }else if(q1>b){
            cout<<n-b<<endl;
        }else{
            long long int mid=(a+b)/2;
            long long int mini=min((abs(mid-a)),(abs(mid-b)));
            cout<<mini<<endl;
        }
    }
    return 0;
}