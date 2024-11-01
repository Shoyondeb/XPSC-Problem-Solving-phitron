#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int one=0, zero=0;
        for(int i=0; i<2*n; i++){
            int x;
            cin>>x;
            if(x==0){
                zero++;
            }else{
                one++;
            }
        }
        
        if(one==0 || zero==0){
            cout<<0;
        }else{
            cout<<one%2;
        }
        cout<<" ";
        if(one==zero){
            cout<<one<<endl;
        }else if(one<zero){
            cout<<one<<endl;
        }else{
            cout<<zero<<endl;
        }
    }
    return 0;
}
 