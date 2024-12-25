#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=1 && n<3){
        cout<<1<<endl;
    }else if(n>=3 && n<7){
        cout<<2<<endl;
    }else if(n>=7){
        cout<<3<<endl;
    }else
    cout<<0;
    return 0;
}