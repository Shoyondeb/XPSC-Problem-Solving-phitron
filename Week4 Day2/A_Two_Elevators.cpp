#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c;
        int p=a-1;
        if(b<c)
         d=abs(b-c)+c-1;
        else
         d=b-1;
    if(p==d){
        cout<<3<<endl;
    }else if(p<d){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
    }
    return 0;
}