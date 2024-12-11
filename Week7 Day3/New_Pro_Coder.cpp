#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int p=n/2;
    if(n%2!=0){
        p++;
    }
    if(m>=p){
        cout<<"NEWBIE";
    }else{
        cout<<"PRO";
    }
    return 0;
}