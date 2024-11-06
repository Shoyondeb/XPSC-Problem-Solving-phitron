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
    set<int>st;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vec.push_back(x);
        st.insert(x);
    }
    int i=0, j=vec.size()-1;
    int flag=0; 
    while(i<j){
         
        if((vec[i]!=*st.begin() && vec[i]!=*st.rbegin()) && (vec[j]!=*st.begin() && vec[j]!=*st.rbegin())){
            flag=1;  
            break;
        }
        else if(vec[i]==*st.begin() || vec[i]==*st.rbegin()){
            st.erase(vec[i]);
            i++;
        } else if(vec[j]==*st.begin() ||vec[j]==*st.rbegin()){
             
            st.erase(vec[j]); 
            j--;
        }
    }
    if(flag==0){
        cout<<"-1\n";
    }else{
        cout<<i+1<<" "<<j+1<<endl;
    }
    }
    return 0;
}