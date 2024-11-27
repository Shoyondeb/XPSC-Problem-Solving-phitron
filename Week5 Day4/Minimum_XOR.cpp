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
        int sum=0;
        set<int>st;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec.push_back(x);
             sum^=vec[i];
        } 
        st.insert(sum);
        for(int i=0; i<n; i++){
            st.insert(sum^vec[i]);
        }
        cout<<*st.begin()<<endl;
    }
    return 0;
}