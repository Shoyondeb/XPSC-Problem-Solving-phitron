#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        int flag=0;
        for(int i=0; i<n-1; i++){
            int a=abs(vec[i]-vec[i+1]);
            if(a==5 || a==7){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}