#include <bits/stdc++.h>
using namespace std;
int buffer(int n){
    deque<int>dq;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        dq.push_back(x);
    }
    int mini=INT_MAX;
    mini=min(mini, abs(dq[0]-dq[1]));
    mini=min(mini, abs(dq[n-1]-dq[n-1-1]));
    for(int i=1; i<n-1; i++){
        mini=min(mini, max(abs(dq[i]-dq[i+1]), abs(dq[i]-dq[i-1])));
    }
    return mini;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int value=buffer(n);
        cout<<value<<endl;
    }
    return 0;
}