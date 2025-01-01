#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<char,int>mp;
        string str;
        cin>>str;
        for(int i=0; i<str.size(); i++){
            mp[str[i]]++;
        }
        if(mp['0']==0){
            cout<<mp['1']<<endl;
        }else if(mp['1']==0){
            cout<<mp['0']<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}