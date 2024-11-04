#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, n2;
    cin>>n>>n2;
    vector<int>vec;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    set<int>st;
    map<int,int>mp;
    for(int i=vec.size()-1; i>=0; i--){
        st.insert(vec[i]);
        mp[i]=st.size();
    }
    while(n2--){
        int pos;
        cin>>pos;
        pos--;
        cout<<mp[pos]<<endl;
    }
    return 0;
}