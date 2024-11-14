#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int r=0;
        string str;
        cin>>str;
        vector<int>vec;
        for(int i=0; i<str.size();i++){
             if(str[i]=='B' && vec.empty()){
                vec.push_back(i+1);
                r=1;
             }else if(str[i]=='B'){
                int dis=(i+1)-vec.back();
                
                if(dis>=k){
                    r++;
                    vec.push_back(i+1);
                }
             }
        }
        cout<<r<<endl;
    }
    return 0;
}