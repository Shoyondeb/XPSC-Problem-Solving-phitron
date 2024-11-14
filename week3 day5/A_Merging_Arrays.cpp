#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    multiset<int>mset;
    for(int i=0; i<n+m; i++){
        int x;
        cin>>x;
        mset.insert(x);
    }
    for(auto it:mset){
        cout<<it<<" ";
    }
    return 0;
}