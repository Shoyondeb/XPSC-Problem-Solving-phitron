#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    count+=a;
    count+=b;
    count+=c;
    float a1, b1;
    a1+=a;
    a1+=(b*0.5);
    b1+=(b*0.5);
    b1+=c;
    a1+=(4-count);
    if(a1>b1){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }

    return 0;
}