#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, mini=INT_MAX,mul=1;
        cin>>n;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mul*=x;
            mini=min(mini,x);
            cout<<1<<" ";
        }
        mul/=mini;
        mini++;
        mul*=mini;
        cout<<mul<<endl;
    }
    return 0;
}