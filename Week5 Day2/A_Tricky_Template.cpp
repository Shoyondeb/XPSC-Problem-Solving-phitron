#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a, b, c;
        cin>>a>>b>>c;
        int count=0;
        for(int i=0; i<n; i++){
            if(c[i]==a[i] || c[i]==b[i]){
                count++;
            }
        }
        if(count==n){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}