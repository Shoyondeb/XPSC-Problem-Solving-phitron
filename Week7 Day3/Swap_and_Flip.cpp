#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b; 
        int count=0, count2=0;
        for(int i=0; i<a.size(); i++){
            if(a[i]=='1'){
                count++;
            }
             if(b[i]=='1'){
                count++;
            }
        }
        if(abs(count-count2)%2==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
         
    }
    return 0;
}