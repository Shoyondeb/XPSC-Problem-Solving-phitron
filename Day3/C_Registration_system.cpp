#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string, int>mp;
    while(t--){ 
        string str;
        cin>>str; 
        if(mp[str]==0){
            cout<<"OK\n";
            mp[str]=1;
        }else{
             cout<<str<<mp[str]<<endl;
             mp[str]++;
        }
    }
    return 0;
}
 