#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>vec;
        int count=n/2+n%2;
        cout<<count<<endl;
        int i=1, r=3*n;
        while(i<r){
            cout<<i<<" "<<r<<endl;
            i+=3, r-=3;
        }
    }
    return 0;
}
