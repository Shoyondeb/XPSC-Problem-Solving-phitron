#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int max=(a>b)?a:b;
    int min=(a<b)?a:b;
    if(max-min>1){
        cout<<max+(max-1)<<endl;
    }else{
        cout<<max+min<<endl;
    }
    return 0;
}