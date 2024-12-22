#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n, a,b,c;
        cin>>n>>a>>b>>c;
        ll day=0;
          day=a+b+c;
        int p=n/day; 
         int  ans=p*3;
          n-=(day*(p)); 
          if(n>=1){
            n-=a;
            ans++;
          }
          if(n>=1){
            ans++;
            n-=b;
          }
          if(n>=1){
            n-=c;
            ans++;
          }
        cout<<ans<<endl;
 
    }
    return 0;
}