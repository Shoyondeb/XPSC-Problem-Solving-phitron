#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int a1=a*b;
        int b1=b*c;
         int c1=c*a;
         int ans=2*(a1+b1+c1); 
         cout<<1000/ans<<endl;

    }
    return 0;
}