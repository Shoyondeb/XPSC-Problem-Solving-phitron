#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>vec(t);
    for(int i=0; i<t; i++){
        cin>>vec[i];
    }
    map<string, int>mp;
    cout<<endl;
    for(int i=vec.size()-1; i>=0; i--){
        if(mp[vec[i]]==0){
            cout<<vec[i]<<endl;
            mp[vec[i]]=1;
        }
    }
     
    return 0;
}