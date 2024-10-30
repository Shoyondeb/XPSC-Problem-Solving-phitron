#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fn=0, gn=0;
        int lim=n/2;
        for(int i=lim; i>=1; i--){
            if(n%i==0){
                if(i%2==0){
                    fn++;
                }else{
                    gn++;
                }
            }
        }
        if(n%2==0){
            fn++;
        }else{
            gn++;
        }
        if(fn>gn){
            cout<<1<<endl;
        }else if(fn==gn){
            cout<<0<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}