#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        deque<int>dq(n+1, 1);
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            if(dq[x]==1){
                vec.push_back(x);
            }
            dq[x]=0;
        }
        for(int d: vec){
            cout<<d<<" "; 
        }
        for(int i=1; i<=n; i++){
            if(dq[i]==1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}