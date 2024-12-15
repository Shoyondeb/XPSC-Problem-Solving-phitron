#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str, ans;
        cin>>str;
        for(int i=str.size()-1; i>=0; i--){
            if(str[i]=='w'){
                ans.push_back('w');
            }else if(str[i]=='p'){
                ans.push_back('q');
            }else if(str[i]=='q'){
                ans.push_back('p');
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}