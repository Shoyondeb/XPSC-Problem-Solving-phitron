#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        deque<int>dq;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            dq.push_back(x);
        }
        sort(dq.begin(), dq.end());
        while(k--){
            int f=dq.front();
            int l=dq.back();
            dq.pop_back();
            dq.pop_front();
            dq.push_back(f+l);
        }
        for(int i=0; i<dq.size(); i++){
            cout<<dq[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}