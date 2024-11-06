#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    set<int>st;
    
    while(t--){
        vector<int>vec;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        string str;
        cin>>str;
        for(int i=0; i<n; i++){
            if(str[i]=='0'){
                vec.push_back(*st.begin());
                st.erase(*st.begin());
            }else{
                vec.push_back(*st.rbegin());
                st.erase(*st.rbegin());
            }
        }
        for(int i:vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}