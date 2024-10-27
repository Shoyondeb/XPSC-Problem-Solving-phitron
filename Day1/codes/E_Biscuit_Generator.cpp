#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    float c;
    cin>>a>>b>>c;
    int i=0;
    int count=0;
    c+=0.5; 
    while(c>=a){
        c-=a;
        count+=b;
    }
    cout<<count<<endl;
    return 0;
}