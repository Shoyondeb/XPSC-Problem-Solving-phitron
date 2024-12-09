#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int H, X, Y;
        cin>>H>>X>>Y;
        int count=1;
        H-=Y;
        while(H>0){
            count++;
            H-=X;
        }
        cout<<count<<endl;
    }
    return 0;
}