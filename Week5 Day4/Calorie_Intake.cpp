#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin>>x>>y>>z;
    if(x<(y*z)){
        cout<<-1<<endl;
    }else{
        cout<<x-(y*z)<<endl;
    }
    return 0;
}