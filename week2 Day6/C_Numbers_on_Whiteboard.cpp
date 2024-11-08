#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        set<int>st;
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            st.insert(i);
        }
        vector<pair<int,int>>vec;
        while(st.size()>=2){
          int a=*st.rbegin();
          st.erase(a);
          int b=*st.rbegin();
          st.erase(b);
          int c=ceil((a+b)/2.0);
          st.insert(c); 
          vec.push_back({a,b});
        }  
        cout<<*st.begin()<<endl;
        for(auto i:vec){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
    return 0;
}