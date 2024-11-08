#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        set<int>st;
        for(int i=0; i<m; i++) {
            int x;
            cin>>x;
            st.insert(x);
        }
        while(q--){
            int value;
            cin>>value;
            if(value<*st.begin()){
                cout<<*st.begin()-1<<"\n";
            }
            else if(value>*st.rbegin()){
                cout<<n-*st.rbegin()<<"\n";
            }else{
            auto it=st.lower_bound(value);
            int right=*it;
            it--;
            int left=*it;
            int mid=(left+right)/2;
            int mini=min(abs(mid-left), abs(mid-right));
            cout<<mini<<endl;
            }
        }
    }
    return 0;
}