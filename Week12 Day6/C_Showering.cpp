#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vector<int>vec;
        for(int i=0; i<n; i++){
            int x, y;
            cin>>x>>y;
            vec.push_back(x);
            vec.push_back(y);
        }  
        int flag=0;
        if(vec[0]-0>=s || m-vec[vec.size()-1]>=s){  
            flag=1;
        }
        for(int i=1; i<=vec.size()-3; i+=2){
            if((vec[i+1]-vec[i])>=s) {
                flag=1; 
            } 
        }
        if(flag==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}