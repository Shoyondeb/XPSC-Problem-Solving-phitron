#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, a, b, ans=0;
        cin>>n>>a>>b;
        int acheck=a*2;
        if(acheck>b){
            ans+=((n/2)*b);
            ans+=((n%2)*a);
            cout<<ans<<endl;
        }else{
            cout<<a*n<<endl;
        }
    }
    return 0;
}